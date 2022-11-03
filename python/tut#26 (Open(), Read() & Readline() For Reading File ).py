# f = open("monty.txt", "rt")
# a = f.read()
# print(a)
#
# f.close()

# #second
# f = open("monty.txt", "rt")
#
# print(f.readline()) # readline is use read line by line
# print(f.readline())
# print(f.readline())
# # a = f.read()
# # print(a)
#
# f.close()

# with for loop
f = open("monty.txt", "rt")
# content = f.read()

for line in f:
    print(line)

f.close()

