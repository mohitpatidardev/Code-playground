
num1 = int(input("Enter number of rows :"))
num2 = int(input("Enter 0 or 1 :"))
# num3 = bool(num2)


# print(type(num3))
# print(num3)

if num2==0 and num1<50:
    for i in range(num1):
        print((i+1)*"*")
elif num2==1 and num1<50:
    for i in range(num1):
        print((num1-i)*"*")
elif num2!= 1 and num2 != 0:
    print("bhai ya to 0 dal le ya to 1")
else :
    print("50 se chota number dale")

