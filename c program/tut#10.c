// tut#10 (if else control statements)

#include <stdio.h>
int main()
{
    int age;
    printf("Enter a your age:\n");
    scanf("%d",&age);

    if (age>=18){
        printf("your can vote\n");
    }
    else if (age>10){
        printf("else if condition\n");
    }
    else{
        printf("you cannot vote\n");
    }
    
    return 0;
}