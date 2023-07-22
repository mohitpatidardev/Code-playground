#include <bits/stdc++.h>
using namespace std;

int main(){
    queue<string> q;

    q.push("monty");
    q.push("montea");
    q.push("mohit");

    cout <<"first element of q is : " << q.front() << endl;

    q.pop();

    cout <<"first element of q is : " << q.front() << endl;
}