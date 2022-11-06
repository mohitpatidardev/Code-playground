# ---------------------------------J.A.R.V.I.S.----------------------------------
import datetime

import pyttsx3
import speech_recognition as sr
import __name__
import comtypes.client

# -----------------------------------------------------------------------------
engine = pyttsx3.init("sapi5")
voices = engine.getProperty("voices")
engine.setProperty('voice', voices[0].id)


def speak(audio):
    """This function is used to speak the text"""
    engine.say(audio)
    engine.runAndWait()


def wishMe():
    """This function is used to wish me     """
    hour = int(datetime.datetime.now().hour)
    if hour >= 0 and hour < 12:
        speak('Good Morning!')
    elif hour >= 12 and hour < 18:
        speak('Good Afternoon!')
    else:
        speak('Good Evening!')
    speak("I am JARVIS Sir. Please tell me how may I help you")


def takeCommand():
    """This function in used to take microphone input fron the user and return string"""
    r = sr.Recognizer()
    with sr.Microphone() as source:
        print("Listening...")
        r.pause_threshold = 1
        audio = r.listen(source)
    try:
        print("Recognizing...")
        query = r.recognize_google(audio, language='en-in')
        print(f"User said: {query}\n")
    except Exception:
        # print(e)
        print("Say that again please...")
        return "None"
    return query


if __name__ != '__main__':
    pass
else:
    wishMe()
    query = takeCommand().lower()
