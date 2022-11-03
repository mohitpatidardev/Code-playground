// tut#7 (operator)

// operator is a symbol used to perform operations in give programming language
/*
Arithmetic operators --> + , - , * , / , % 
relation operators --> == , != , > , < , >= , <=
logical operators --> && , || , !
bitwise operators --> & , | , ^ , ~ binary one's complement, << binary left shift , >> binary right shift 
assignment operators --> = , += , -= , *= , /=
*/

//  multiplicative  * , / , % left to right 
// addive + , - left to right 

#include <stdio.h>

void Arithmetic()
{
    int a = 50 , b = 10;
    printf("sum of a and b is %d\n", a+b);
    printf("sub of a and b is %d\n", a-b);
    printf("multi of a and b is %d\n", a*b);
    printf("division of a and b is %d\n", a/b);
    printf("remender of a and b is %d\n", a%b);
    printf("----------***---------\n");
}
void relation()
{
    printf("%d\n" ,5==5); 
    printf("%d\n" ,6==5);
    printf("%d\n" ,6>=5);
    // 1 means "true" and 0 means "false"
    printf("----------***---------\n");
}
void logical()
{
    printf("%d\n" ,5 && 0); // if both value true return 1 else 0
    printf("%d\n" ,5 && 6); 
    printf("%d\n" ,5 || 6);  // if any value true return 1 else 0
    printf("%d\n" ,5 || 0);
    printf("%d\n" ,0 || 0);
    printf("----------***---------\n");

}
void bitwise()
{
    printf("%d\n", 2 & 3);
    printf("----------***---------\n");

}
void assignment()
{
    int a =4;
    a += 6;
    a -= 6;
    printf("%d\n",a);
    printf("----------***---------\n");
}
int main()
{
    Arithmetic();
    relation();
    logical();
    bitwise();
    assignment();
    return 0;
}