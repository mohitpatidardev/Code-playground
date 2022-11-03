# function
# first
def func1():
    print("hey your in function")
func1()
# print(func1()) # if we use print so program give return none

#second
def func1(a,b):
    print("hey your in function", a+b)
func1(5 , 4)

#third
def func2(a,b):
    """This is a function which will  calculate average of two number"""
    avrage = (a+b)/2
    return avrage

v = func2(5,7)

print(v)
print(func2.__doc__) #docstring





