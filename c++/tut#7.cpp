//  Reference variables & Typecasting

#include <iostream>
using namespace std;
int c = 34;
void v1()
{
    int a, b, c;
    cout << "Enter the value of  a and b" << endl;
    cin >> a >> b;
    c = a + b;
    cout << "the sum of ab is " << c << endl;
    cout << "the value of globle varibale is " << ::c << endl; // '::' scoop resolution operator
}

void v2()
{
    // ************float, doubbel and long double Literals*************
    float d = 56.7f;
    long double e = 34.2l;
    cout << "The value of d is " << d << endl
         << "The value of e is " << e << endl;

    cout<<"The size of 56.7 is "<<sizeof(56.7)<<endl;  
    cout<<"The size of 56.7f is "<<sizeof(56.7f)<<endl; 
    cout<<"The size of 56.7F is "<<sizeof(56.7F)<<endl;
    cout<<"The size of 34.2 is "<<sizeof(34.2)<<endl;
    cout<<"The size of 56.7l is "<<sizeof(56.7l)<<endl;
    cout<<"The size of 56.7L is "<<sizeof(56.7L)<<endl;
}
void v3()
{
    // *************Referance Variables*******************
    // Reference Variable ,means the same  item with different identity 
    
    float x =34;
    float & y = x;
    cout<<y<<endl;
    cout<<x<<endl;
}
void type()
{
    // *************Typecasting*****************
    
    int f = 34;
    float g = 45.36;
    cout<<"The value of f :"<<(float)f<<endl;
    cout<<"The value of f :"<<float(f)<<endl;  // Both are same way to  typecast
    cout<<"The value of g :"<<(int)g<<endl;
    cout<<"The value of g :"<<int(g)<<endl; // Both are same way to  typecast

    cout << typeid(g).name() << endl;


    cout<<"The expresstion is :"<<f+g<<endl;
    cout<<"The expresstion is :"<<f+(int)g<<endl;
    cout<<"The expresstion is :"<<f+int(g)<<endl;
}

int main()
{
    // v1();
    // v2();
    // v3();
    type();
    return 0;
}