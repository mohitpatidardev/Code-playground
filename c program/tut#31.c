// call by value and call by reference
/*
Actual & Formal Parameters

* When a function is called the value (expressions) that are passed in the call are called the arguments or actual parameters.
* Formal parameters are local variables which are assigned value from the arguments when the function is called.

// types of function calls in c programming 

* call by value --> when we call a function by value. it means that we are passing the value of the argument which are copied into the formal parameters of the function.
*call by Reference --> The call by reference methord of passing arguments to a c function copies the address of the argument into the formal parameters

*/

/*
// call by reference example

#include <stdio.h>
// function definition to swap teh value 
void swap(int *x, int *y)
{
    int temp;
    temp = *x; // save the value at address x 
    *x = *y; // put y into x 
    *y = temp; // put temp into y
    return ;
}
int main()
{
    int a = 34 , b = 74;
    printf("%d and %d\n",a , b);
    swap(&a , &b);
    printf("%d and %d\n" , a , b);
    return 0;
}

*/

#include <stdio.h>
void changevalue(int *address)
{
    *address = 745;
}
int main()
{
    int a = 54 , b = 64;
    printf("The value of a now is %d\n",a);
    changevalue(&a);
    printf("The value of a now is %d\n",a);
    return 0;
}