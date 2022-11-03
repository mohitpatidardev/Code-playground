// tut#4 (variable scope & data types)

/*
1.) Built-in Data types

int
float
char
double
boolean

2.) user deffined data types

struct
union
enum

3.) derived data types

array
function
pointer

*/

// local variables --> local variables are declared inside the braces of any function and can be accessed only from there.

// global variables are declared outside any function and can be accessed from anywhere.

#include <iostream>
using namespace std;
int say = 7; //globle variale 

void sum()
{
    cout<<say;
}
int main()
{
    int say = 9; //local variable  ** prisidence local variable ko milti he 
    say = say + 6;
    int a = 7, b = 8;
    float c = 5.34;
    char d = 'M';
    sum();   

    cout << "\nthe value of a is " << a
         << "\nthe value of b is " << b
         << "\nthe value of c is " << c
         << "\nthe value of d is " << d;
    cout<< "\n"<<say; 
      
}
