// passing arrays as function arguments
/*
* we pass arrays to a function when we need to pass a list of values to a function.
* we can pass the arrays to a function :
1. By declarinf arrays as a parameter in the function.
2. By declaring a pointer in the function to hold the base address of the array.
*/

#include <stdio.h>

int func1(int array[])
{
    for (int i = 0; i < 4; i++)
    {
        printf("The value at %d is %d\n", i, array[i]);
    }
    array[0] = 345; // Very important point that if you change any value here, it gets reflected in main()
}

void func2(int *ptr)
{
    for (int i = 0; i < 4; i++)
    {
        printf("The value at %d is %d\n", i, ptr[i]);
        // printf("The value at %d is %d\n",i,*(ptr+i)); // you can also do that
    }
    *(ptr + 2) = 543;
}

void func3(int arr[2][2])
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("The value at %d,%d is %d\n", i,j,arr[i][j]);
        }
    }
}

int main()
{
    // int arr[] = {23,13,3,4};
    int arr[2][2] = {{34, 76}, {54, 23}};
    // printf("The value at index 0 is %d\n",arr[0]);
    // func1(arr);
    // printf("The value at index 0 is %d\n",arr[0]);
    // func2(arr);
    // func2(arr);
    func3(arr);
    return 0;
}