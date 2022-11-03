// tut#6 (Header files & operators)
// There are two types of header files
// 1. system header files: It comes with the compiler
#include <iostream>
// 2. User defined header files: It is written by programer
// #include "this.h"  //--> This will produce an error if this.h is no present in the current directory

#include <iostream>

using namespace std;
int main()
{
    int a = 4, b = 5;
    cout << "operators in c++" << endl;
    cout << "following are the types of operators in c++" << endl;
    // Arithmetic operators

    cout << "The value of a + b is " << a + b << endl;
    cout << "The value of a - b is " << a - b << endl;
    cout << "The value of a * b is " << a * b << endl;
    cout << "The value of a * b is " << a * b << endl;
    cout << "The value of a / b is " << a / b << endl;
    cout << "The value of a++ is " << a++ << endl;
    cout << "The value of a-- b is " << a-- << endl;
    cout << "The value of ++a is " << ++a << endl;
    cout << "The value of --a is " << --a << endl;

    cout<<"*****************"<<endl;

    // Assignment Operators --> used to assign value to variables

    // int a = 3 , b = 9;
    // char d = 'p';

    // comparison operators

    cout << "the value of a == b " << (a == b) << endl;
    cout << "the value of a != b " << (a != b) << endl;
    cout << "the value of a > b " << (a > b) << endl;
    cout << "the value of a < b " << (a < b) << endl;
    cout << "the value of a <= b " << (a <= b) << endl;
    cout << "the value of a >= b " << (a >= b) << endl;

    cout<<"****************"<<endl;
    // logical operators

    cout << "the value of logical and operator((a == b) && (a<b)) is " << ((a == b) && (a<b)) << endl;
    cout << "the value of logical or operator((a == b) || (a<b)) is " << ((a == b) || (a<b)) << endl;
    cout << "the value of logical not operator(!(a == b)) is " << (!(a == b)) << endl;

    return 0;
}