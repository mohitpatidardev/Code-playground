// tut#11 (switch case control statment)
/*
1.) switch expresion must be an int or char
2.) cash value must be an integer or character
3.) case must came inside switch
4.) break is not  a must
*/

#include <stdio.h>
int main()
{
    int sub;
    printf("Enter 1 for tofi\nEnter 2 for coffee\nEnter 3 for cokiee");
    scanf("%d", &sub);

    switch (sub)
    {
    case 1:
        printf("you got tofi\n");
        break;

    case 2:
        printf("you got coffee\n");
        break;

    case 3:
        printf("you got cokiee\n");
        break;

    default:
        printf("nothing for you becouse you enterd worng number\n");
    }
    return 0;
}