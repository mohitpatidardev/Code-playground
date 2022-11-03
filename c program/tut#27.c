// Arrays and Pointer Arithmetic
/*
There are four arithmetic operators that can be used on pointers
1. ++
2. --
3. +
4. -
*/

#include <stdio.h>
void ptrop()
{
    // int a = 4;
    // int *ptra = &a;
    // printf("%d\n",ptra); // address in intiger 
    // printf("%p\n",ptra);
    // printf("%x\n",ptra); // address in hexadecimal 
    // printf("%d\n",ptra+1); // +1 is add 1 size of int if we add char so add 1 becouse char take 1 bit and int take 4 
    char b = '4';
    char *ptrb = &b;
    printf("%d\n",ptrb);
    ptrb++;
    printf("%d\n",ptrb-2);
    // printf("%d\n",ptrb+3);
    // printf("%d\n",ptrb-5);
}
void arrptr()
{
    // Array and pointer 
    int arr[] = {1,3,4,5,3,6,45,34};
    printf("value at position 4 of the array is %d\n",arr[4]);
    printf("The address of first element of the array is %d\n",&arr[0]);
    printf("The address of first element of the array is %d\n",&arr[1]);

    printf("The value at address of first element of the array is %d\n",*(&arr[0]));
    printf("The value at address of first element of the array is %d\n",*(arr));
    printf("The value at address of first element of the array is %d\n",*(&arr[1]));
    printf("The value at address of first element of the array is %d\n",*(arr + 1));

}
int main ()
{
    // ptrop();
    arrptr();
    return 0;
}
