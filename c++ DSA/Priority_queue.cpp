#include <bits/stdc++.h>
using namespace std;

int main(){

    queue<string> q;

    // max heap 
    priority_queue<int> maxi;

    maxi.push(4);
    maxi.push(1);
    maxi.push(7);
    maxi.push(0);

    int n = maxi.size();
    for(int i=0;i<n ; i++){
        cout << maxi.top() << " ";
        maxi.pop()  ;
    }cout << endl;

    // mini - heap

    priority_queue<int , vector<int > , greater<int> > mini;

    mini.push(1);
    mini.push(7);
    mini.push(0);
    mini.push(4);

    int m = mini.size();
    for(int i=0;i<m ; i++){
        cout << mini.top() << " ";
        mini.pop()  ;
    }cout << endl;

}