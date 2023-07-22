#include <bits/stdc++.h>
using namespace std;

void revers(char name[] , int n){
    int s= 0;
    int e = n-1;

    while(s<e){
        swap(name[s++] , name[e--]);
    }
}


int getLength(char name[]){
    int count = 0;
    for(int i=0 ; name[i]!='\0' ; i++){
        count++;
    }

    return count;
}

int main(){

    // null value are not alloewd in char array 
    char name[10] ;

    cout << "Enter string " ;
    cin >> name;
    
    // name[2] = '\0'; 
    // cout << "Your String is : " << name << endl;

    int len = getLength(name);
    cout << "length : "<<len << endl;

    revers(name , len);
    cout << "reversed String is : " << name << endl;


    return 0;

}