/* print multiplication table of a number enterd by the user
*/

#include <stdio.h>

int main ()
{
    int a ;
    printf("Enter the number you want multiplication table of :");
    scanf("%d",&a);
    for (int i = 1; i<=10; i++)
    {
        printf("%dX%d=%d\n", a,i,i*a);
    }
    return 0;
}