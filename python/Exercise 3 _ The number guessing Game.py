# The number guessing Game
# n = 25
# No. of guesses 10
# print no. of guesses left
# No. of guesses he took to finish
# game over

print("Welcome to number guessing Game please Enter number between 1 to 50")
print("You have 10 chance to guess the number")
i = 1
while i<=10:
    num = int(input("Enter number :"))
    if num==25:
        print("Congratulation You Win")
        print("number of guesses you took to finish : ",i)
        break
    elif num>25:
        print("No please decrease you number")
        print("number of guesses left : ", 10 -i)
        if 10-i==0:
            print("Game Over")
        i = i+1
        # continue
    elif num<25:
        print("No please increase you number")
        print("number of guesses left : ", 10 -i)
        if 10-i==0:
            print("Game Over")
        i = i+1
        continue



