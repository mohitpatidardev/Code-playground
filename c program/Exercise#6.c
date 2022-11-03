// array revers

#include <stdio.h>

void arrayRev(int arr[])
{
    int temp;
    for (int i = 0; i < 7/2; i++)
    {
        // swap Item i with Item (6-i)

        temp = arr[i]; // temp is 1
        arr[i] = arr[6-i];
        arr[6-i] = temp;
    }
    
}

void arrayprint(int arr[])
{
    for (int i = 0; i < 7; i++)
    {
        printf("The value of element %d is %d\n",i , arr[i]);
    }
}

int main()
{
    int arr[] = {23,5,55,48,87,24,90};
    printf("Before reversing array \n");
    arrayprint(arr);
    arrayRev(arr);

    printf("After reversing the array\n");

    arrayprint(arr);
    
    return 0;
}