with open("monty.txt") as f: # with block use to read file
    a = f.read()
    print(a)

f = open("monty.txt","rt")
print(f.readline())
f.close()

with open("monty.txt") as f:
    a = f.read(5)
    print(a)


