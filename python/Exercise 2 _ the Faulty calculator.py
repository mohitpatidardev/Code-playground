#Exercise 2 - the Faulty calculator
'''
Q. Desing a calculator which will correctly solve all the problems except
the following ones:
45 * 3 = 555, 56 + 9 = 77, 56/6 = 4
your program should take operator ad the two number as input from user
and then return the return result.
'''

f1 = int(input("Enter a first number\n"))
f2 = int(input("Enter a seconf number\n"))

op = input("Enter your opretor")

if op=="+":
    if f1==56 and f2==9:
        print("56 + 9 = 77")
    else:
        print(f1,"+",f2, "=", f1 + f2 )
elif op=="-":
    print(f1,"-",f2, "=", f1 - f2 )
elif op=="/":
    if f1 == 56 and f2 == 6:
        print("56 / 6 = 4")
    else:
        print(f1, "/", f2, "=", f1 / f2)
elif op=="*":
    if f1 == 45 and f2 == 3:
        print("45 * 3 = 555")
    else:
        print(f1, "*", f2, "=", f1 * f2)







