a = input("Enter a \n")
b = input("Enter b \n")
try:
    print("The sum of those two number is",
          int(a) + int(b))
except Exception as e:
    print(e)

print("This line is very important")