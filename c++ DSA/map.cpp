#include <bits/stdc++.h>
using namespace std;

int main(){
    map<int , string>m;

    m[1] = "sasuke";
    m[7] = "naruto";
    m[4] = "kakashi";

    m.insert({6,"itachi"});
    
    for(auto i:m){
        cout << i.first << " " << i.second << endl;
    }cout << endl;
}