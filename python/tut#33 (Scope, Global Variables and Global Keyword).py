
l = 6 # this global variable
def function1(n):
    # l = 8 #local variable
    m = 2 #local variable
    global l # we change global variable with using global keyword
    l = l + 2 # we canot change gloabe varibal with this methord

    print(l,m)
    print(n,"hello i am mohit")

function1("hey i am cypher")
print(l)

x = 100
def fun():
    x = 10
    def fun1():
        global x
        x = 90
    fun1()

fun()
print(x)
