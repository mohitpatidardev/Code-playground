f = open("monty.txt")

print(f.readline())
# print(f.tell())
# print(f.readline())
# print(f.tell())
f.seek(6)
print(f.readline())

f.close()

