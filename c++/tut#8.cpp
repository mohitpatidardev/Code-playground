// constants,Manipulators & operator precedence

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    // constants in c++
    const int a = 34;
    cout << "The value of a was " << a << endl;
    // a = 65; // you will get an error you can't do this you a is a constant variable
    cout << "The value of a is " << a << endl;

    cout << "************Manipulators in c++*************" << endl;

    int x = 34, y = 453, z = 4563;
    cout << "The value of x is without setw " << x << endl;
    cout << "The value of y is without setw " << y << endl;
    cout << "The value of z is without setw " << z << endl;
    // with setw
    cout << "The value of x is " << setw(4) << x << endl;
    cout << "The value of y is " << setw(4) << y << endl;
    cout << "The value of z is " << setw(4) << z << endl;

    cout << "**********operator precedence***************" << endl;

    int p = 4, q = 7;
    // int r = p*5+q-45+87;
    int r = ((((p*5)+q)-45)+87); // arange paranthesis with precedence
    cout<<r<<endl;

    return 0;
}