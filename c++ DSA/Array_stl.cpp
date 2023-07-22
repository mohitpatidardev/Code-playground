#include <bits/stdc++.h>
#include <array>
using namespace std;

int main(){

    array<int,4> a = {1,2,3,4};
    int size = a.size();

    // for(int i:a){
    // cout << i << " ";
    // } cout << endl;

    for(int i=0 ; i<size ; i++){
        cout << a[i] << " ";
    }  

    cout << endl;

    cout << " first Index of array is " << a.front() << endl;    
    cout << " last Index of array is " << a.back() << endl;

    cout << " Element at Index 2 is : " << a.at(2) << endl;
}