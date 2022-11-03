// control structures 

//  basic structures
// 1.sequace structures 
// 2.selaction structures
// 3.loop structures


#include <iostream>

using namespace std;
void ifelse()
{
    // selaction control structures : if-else if-else ladder
    int age ;
    cout<<"tell me your age"<<endl;
    cin>>age;

    if(age>18 and age<45){
        cout<<"you come to my party"<<endl;
    }
    else if(age>45){
        cout<<"you will get pass for daddu's party"<<endl;
    }  
    else{
        cout<<"you cannot come to my party"<<endl;
    }
}

void swich()
{
    int age;
    // selaction control structures : switch case statements
    cout<<"Enter your age"<<endl;
    cin>>age;
    switch (age)
    {
    case 18:
        cout<<"you are 18"<<endl;
        break;
    case 22:
        cout<<"you are 22"<<endl;
        break;
    case 2:
        cout<<"you are 2"<<endl;
        break;
    
    default:
    cout<<"NO special cases"<<endl;
        break;
    }
}

int main()
{
    // ifelse();
    swich();
    return 0;
}