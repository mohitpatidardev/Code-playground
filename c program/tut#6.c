// tut#6 (data type)

/*
flow of a c program

preproccessing > compilation > assembly > linking > loading 

basic data type : int,char,float,double
derived data type : array,pointer,structure,union
Enumeration data type : emum
void data type : void

*/

// 
#include <stdio.h>
int main ()
{
    printf("%lu\n", sizeof(int));
    printf("%lu\n", sizeof(char));
    printf("%lu\n", sizeof(float));
    printf("%lu\n", sizeof(_Bool));
    return 0;
}