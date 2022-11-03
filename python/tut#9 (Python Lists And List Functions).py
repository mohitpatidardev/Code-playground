stuff = ["dal","roti","bhindi","gulabjamun"]

print(stuff[3])

number = [4, 10, 5, 1, 7]
# number.sort()
# number.reverse()
number.append(15) # append use for add number in end of the list
number.insert(0,6) # insert use  (index , add number)
number.remove(10) # this is use for remove number
number.pop() # pop use for remove last number in a list

number[1] = 55

print(number)
print(max(number)) # for maximum value
print(min(number)) # minimum value

# mutable - can change list is mutabel
# immutable - cannot change tuple is immutble

# tuple

tp = (4, 8, 3, 7, 9)
print(tp)

#tp[2] = 5  we cannot change tuple value

# swap two value

a = 7
b = 5

a,b = b,a
print(a,b)


