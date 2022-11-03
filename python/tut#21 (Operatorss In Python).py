'''
# operator in python
* Arithmetic operator
* Assignment operator
* Comparison operator
* Logical operator
* Identity operator
* membership operator
* bitwise  operator
'''

# Arithmetic operator

print("5 + 4 is", 5+4)
print("5 * 4 is", 5*4)
print("5 ** 4 is", 5**4) # 5 ka square # exponensial
print("5 / 4 is", 5/4)
print("5 % 4 is", 5%4) # modulas # shows remainder
print("5 - 4 is", 5-4)
print("10 // 2 is", 10//2)

# Assignment operator

x = 56
print(x)
x+=4 # mean x = x+7
print(x)

# Comparison operator

i = 5
print(i == 5)
'''
==, != , <= , >= , < , >
'''

# Logical operator

a = True
b = False

print(a and b) # and matlb jab dono suach ho
print(a or b) # or matlb ek bhhi suach ho to

# Identity operator

print(a is not a)
# print(5 is 5)

# membership operator

list = [45,34,76,234,89,8,54]

print(45 not in list)
print(3467 in list)

# bitwise  operator

# o - 00
# 1 - 01
# 2 - 10
# 3 - 11

print(0 | 3)
print(0 & 3)
