# # n!  =  n * n-1 * n-2 * n-3.......1
# # ni = n * (n-1)!
#
# def factorial_itrative(n):
#     fac = 1
#     for i in range(n):
#         fac =  fac * (i+1)
#     return fac
#
#
# number = int(input("Enter a number"))
# print("factorial using itrative methord", factorial_itrative(number))
#
#
# # useing recursion
#
# def factorial_recursion(n):
#
#     if n == 1 or n==0:
#         return 1
#
#     else:
#         return n * factorial_recursion(n-1)
#
#      # 5 * factorial_recursive(4)
#     # 5 * 4 * factorial_recursive(3)
#     # 5 * 4 * 3 * factorial_recursive(2)
#     # 5 * 4 * 3 * 2 * factorial_recursive(1)
#     # 5 * 4 * 3 * 2 * 1 = 120
#
#
# number = int(input("Enter a number"))
# print("factorial using recursion methord", factorial_recursion(number))


# Q. create fabonacci series

def fabo(n):
    if n==1:
        return 0
    elif n==2:
        return 1
    else:
        return fabo(n-1) + fabo(n-2)

num = int(input("Enter term which you want"))
print("term is" ,fabo(num))



