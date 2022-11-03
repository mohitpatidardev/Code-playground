// Take input from the user and ask user to choose 0 for Triangular star pattern and 1 for Reversed Triangular star pattern

/*
1.  *
    **
    ***
    **** --> Triangular star pattern

2.  ****
    ***
    **
    *  --> Reversed Triangular star pattern 
*/
#include <stdio.h>
int main()
{
    int num,rows;
    printf("Enter number of rows:\n");
    scanf("%d",&rows);
    printf("Enter 0 for Triangular star pattern:\nEnter 1 for Reversed Triangular star pattern:\n");
    scanf("%d",&num);
    if (num==0)
    {
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j <= i; j++)
            {
                printf("*");
            }
            printf("\n");    
        }
        
    }
    else if(num==1)
    {
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j <= rows-i-1; j++)
            {
                printf("*");
            }
        printf("\n");  
        }
        
    }
    return 0;
}