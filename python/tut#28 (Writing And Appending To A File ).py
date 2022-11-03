# # first
# f = open("monty1.txt", "w") # w for write only
# a = f.write("hey this file create by write function")
# print(a) # this is print number of character
# f.close()

# # add for content
# f = open("monty1.txt", "a") # a for add
# f.write("hey this file create by write function\n")
#
# f.close()

# Handle read and write both
f = open("monty1.txt", "r+") # + mean read and write
print(f.read())
f.write("hey i am mohit\n")
f.close()
