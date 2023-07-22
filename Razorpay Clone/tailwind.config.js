/** @type {import('tailwindcss').Config} */
module.exports = {
  content: ["*"],
  theme: {
    extend: {
      fontFamily:{
        mullish: ["Mulish" , "sans-serif"],
      },
      colors:{
        logo: "#3E419C",
        bluelight: "#ADC7F9",
        graywhite: "#E5EDFD",
        deepBlue: "#02042a",
        lightBlue: "#2b84ea",
        lightBlue300: "#4b94ed",
        lightBlue500: "#0b72e7",
        greenLight: "#61cea6",
        greenText: "#818597",
        lightGray: "#e2e2e2",
        grayBlue: "#344a6c",
        deepBlueHead: "#162f56",
        gray2: "525a76",
      },
      iconcol: {
        '2b84ea': '4b94ed',
      }
    },
  },
  plugins: [],
}

