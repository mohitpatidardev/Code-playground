// tut#6 (variabel)  
// valid variable names: int cypher, float cypher123,char _harry34
// invalid variable names: $cypher, int 77harry, char long;

#include<stdio.h>

int main ()
{
    int a,b,c;
    // float a,b,c;
    printf("Enter a,b and c value :");
    scanf("%d%d%d",&a,&b,&c);

    printf("sum of a,b and c is %d\n", a+b+c);
    return 0;
}