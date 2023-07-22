#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main(){
    vector<int> v;  
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);

    
    vector<int> a (5,1); // 5 is size of vector and 1 means fill all 5 element  with 1
    cout << "print a : ";
    for(int i:a){
        cout << i << " ";
    } 

    cout<< "capacity : " << v.capacity() << endl;
    cout << " size : " << v.size() << endl; 


    // before pop 

    for(int i:v){
        cout << i << " ";
    } cout << endl;

    // after pop 

    v.pop_back();

    for(int i:v){
    cout << i << " ";
    } cout << endl;

    // size before clear
    cout << " size : " << v.size()<< endl;
    // after clear
    v.clear(); // after use clear only vector gonna empty capacity is same
    cout << " size : " << v.size()<< endl;
}