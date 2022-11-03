// while and do-while loops
/*
1.For loop
2. whiel loop 
3. do while loop
*/

#include <iostream>

using namespace std;

int main () 
{
    int  a,num;
    cout<<"Enrter number"<<endl;
    cin>>num;
    for (int i = 0; i <= num; i++)
    {
        a = i*num;
        cout<<a<<endl;
    }
    

    return 0;
}