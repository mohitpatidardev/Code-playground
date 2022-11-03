# variables

var1 = "hello world"

print(var1)

# type and typecasting

va1 = "hello world"
var4 = " monty"
var5 = "50"
var6 = "40"
var2 = 5
var3 = 35.6

print(type(var1))

print(var2 + var3)
print(var1 + var4)
# print(var1 + var3)  we can't add string and integer or float

print(int(var5) + int(var6))  # typecast str to int

print(100 * "hello world\n")

print(10 * str(int(var5) + int(var6))) # typecast int to str

# input

print("Enter your number ")

num = input()
# print("you intered ", num + 10) this is not working becouse "num" is string we have to convert into number

print("you intered ", int(num) + 10)


# Q- careat programe to add two number

print("Enter first value")
num1 = input()

print("Enter second value")
num2 = input()

print("sum of num1 and num2 is ", int(num1) + int(num2))

# data type

'''
int 
str
float
boolean
'''
