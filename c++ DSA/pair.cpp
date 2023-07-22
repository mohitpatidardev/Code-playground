#include <bits/stdc++.h>
using namespace std;

void explainpair(){
    pair<int , int> a = {2,5};
    cout << a.first << " " << a.second << endl;
    
    pair< int , pair <int , int >> b = {1,{4,6}};

    cout<< b.first <<" " << b.second.second <<" " << b.second.first << endl;

    pair <int , int > arr[] = {{1,3} ,{2,4}, {5,8}};
    cout<< arr[0].second;
}

int main (){
    explainpair();
    return 0;
}