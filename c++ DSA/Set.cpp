#include <bits/stdc++.h>
using namespace std;

int main(){
    set<int> s;

    s.insert(5);
    s.insert(7);
    s.insert(2);
    s.insert(0);

    for(int i : s){
        cout << i << " ";
    }cout << endl;

    set<int> :: iterator it = s.begin();
    it++;

    s.erase(it);

    for(int i : s){
        cout << i << " ";
    }cout << endl;

    cout << endl;

    cout << "5 is present in set or no " << s.count(5);



}