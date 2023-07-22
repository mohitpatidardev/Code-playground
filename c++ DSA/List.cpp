#include <bits/stdc++.h>
using namespace std;

int main(){

    list<int> l;

    l.push_front(1);
    l.push_back(2);

    for(int i :l){
        cout << i << " ";
    }
}