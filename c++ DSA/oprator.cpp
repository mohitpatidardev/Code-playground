//bitwise opratore

#include <iostream>
using namespace std;

void bitwise(){

    int a = 4;
    int b = 6;

    cout << "a&b " << (a&b) << endl;
    cout << "a|b " << (a|b) << endl;
    cout << "~a " << (~a) << endl;
    cout << "a^b " << (a^b) << endl;
}

void right$leftshift(){
    // << left shift
    // >> righht shift

    cout << (17>>1) << endl;
    cout << (17>>2) << endl;
    cout << (19<<1) << endl;
    cout << (21<<2) << endl;
}
int main(){
    

    // bitwise();
     right$leftshift();
    
}