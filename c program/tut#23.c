// tut#23 (Arrays in c)

// an array is a collection of data items of the same type.
// A one-dimensional array is like a list.
// A two-dimensional array is like a matrix.

#include <stdio.h>

void array1()
{
    int marks[4];
    marks[0] = 45;
    printf("marks of student 1 is %d", marks[0]);
}

void array2()
{
    int marks[4];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the value of %d element of the array\n", i);
        scanf("%d", &marks[i]);
    }

    for (int i = 0; i < 4; i++)
    {
        printf("the value of %d element of the array is %d \n", i, marks[i]);
    }
}

void array3()
{
    int marks[4] = {45, 53, 768, 34};

    for (int i = 0; i < 4; i++)
    {
        printf("the value of %d element of the array is %d \n", i, marks[i]);
    }
}

void array4()
{
    int marks[2][4] = {{34, 465, 23, 54},
                       {23, 56, 234, 67}};

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            // printf("the value of %d , %d element of the array is %d \n", i, j, marks[i][j]);
            printf("%d  " , marks[i][j]);
        }
        printf("\n");
    }
}

void array5()
{
    int x,y;
    
    printf("Enter the length of 2D array\n");
    printf("Enter number of rows\n");
    scanf("%d",&x);
    printf("Enter number of column\n");
    scanf("%d",&y);
    int marks[x][y];
    printf("Enter your element row wise\n");
    for (int i = 0; i < x; i++)
    
        for (int j = 0; j < y; j++)
        {
            scanf("%d",&marks[i][j]);

        }
        printf("the value of given matrix is \n");

    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            printf("%d  " , marks[i][j]);
        }
        printf("\n");
    }    
        
    }

void array6()
{
    int x,y;
    
    printf("Enter the length of 2D array\n");
    printf("Enter number of rows\n");
    scanf("%d",&x);
    printf("Enter number of column\n");
    scanf("%d",&y);
    int marks[x][y];
    printf("Enter your element row wise\n");
    for (int i = 0; i < x; i++)
    
        for (int j = 0; j < y; j++)
        {
            scanf("%d",&marks[i][j]);

        }
    printf("the value of given matrix is \n");

    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            printf("%d  " , marks[i][j]);
        }
        printf("\n");
    }  
    printf("transpos of matrix \n");

    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            printf("%d  " , marks[j][i]);
        }
        printf("\n");
    }       

       
}

void array7()
{
    // C Program to Insert an element
// at a specific position in an Array

    int arr[100] = { 0 };
    int i, x, pos, n = 10;
 
    // initial array of size 10
    for (i = 0; i < 10; i++)   
        arr[i] = i + 1;
 
    // print the original array
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
    
    // element to be inserted
    x = 50;
 
    // position at which element
    // is to be inserted
    pos = 5;
 
    // increase the size by 1
    n++;
 
    // shift elements forward
    for (i = n - 1; i >= pos; i--)
        arr[i] = arr[i - 1];
 
    // insert x at pos
    arr[pos - 1] = x;
 
    // print the updated array

    for (i = 0; i < n; i++)
    printf("%d ", arr[i]);
    printf("\n");
 

}

void array8()
{
    
    int r,c , i , j;
    
    printf("Enter number of rows\n");
    scanf("%d",&r);
    printf("Enter number of column\n");
    scanf("%d",&c);
    int marks[r][c];
    printf("Enter your element row wise\n");
    for (i = 0; i < r; i++)
    
        for (j = 0; j < c; j++)
        {
            scanf("%d",&marks[i][j]);

        }
        printf("the value of given matrix is \n");

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d  " , marks[i][j]);
        }
        printf("\n");
    }    
        
    }

  

int main()
{
    // array1();
    // array2();
    // array3();
    // array4();
    // array5();
    // array6();
    // array7();
    array8();
    return 0;
}
