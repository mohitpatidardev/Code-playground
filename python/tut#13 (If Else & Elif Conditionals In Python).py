var1 = 77
print("Enter a number\n")
var2 = int(input())

if var2>var1:
    print("Greater")
elif var2==var1:
    print("Equal")
else:
    print("lesser")

if else with list

list1 = [2,4,5,8,1]

print(5 in list1)
if 5 in list1:
    print("yes its in the list1")

list1 = [2,4,5,8,1]

print(5 not in list1)
if 6 not in list1:
    print("yes its not in the list1")

# Q. make a  program to check pepole drive or not with age.

print("Enter your age :\n")

age = int(input())

if 7<age<100:
    if age>18:
        print("you can drive")
    elif age==18:
        print("you come our office we check you physically")
    else:
        print("you cannot drive")
else:
    print("Enter a valid age between 7 to 100")

