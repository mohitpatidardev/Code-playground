#include <bits/stdc++.h>
using namespace std;

int main(){
    deque<int> d;
    d.push_back(2);
    d.push_front(1);
    d.push_back(3);
    d.push_back(4);
    
    for(int i:d){
        cout << i << " " ;
    }cout <<endl;

    // d.pop_back();

    cout << "Element at Index 1 is : " << d.at(1) << endl;

    cout << "Front element is : " << d.front() << endl;
    cout << "last element is : " << d.back() << endl;



    cout<< "size before erase : "<< d.size() << endl;
    d.erase(d.begin() , d.begin()+1);
    cout<< "size after erase : "<< d.size() << endl;

    for(int i : d){
        cout<< i << " ";
    }

}