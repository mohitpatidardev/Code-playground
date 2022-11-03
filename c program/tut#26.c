// pointers in c
/*
variable which stores the address of another variable.
can be of type int,char,array,function or any other pointer.
pointer declared using '*' (asterisk symbol)
%p --> for print address of any variable
%x --> print hexadecimale value 
%d --> print integer value
*/

// NULL pointer 
/*
A pointer that is not assigned any value but NULL is known as the NULL pointer.

*/

#include <stdio.h>
int main()
{
    int a = 45;
    int *ptra = &a;
    int *ptr2 = NULL;
    printf("the value of a is %d\n",a);
    printf("the address of a is %p\n",&a);
    printf("the value of a is %d\n",*ptra);
    printf("the value of a is %x\n",ptra);
    printf("the address of pointer a is %p\n",&ptra);
    printf("the value of a is %p\n",*ptra);
    printf("the value of a is %d\n",ptr2);
    printf("the the address of ptr2 is %p\n",ptr2);
    return 0;
}
