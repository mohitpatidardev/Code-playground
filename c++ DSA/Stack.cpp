#include <bits/stdc++.h>
using namespace std;

int main(){

    stack<string> s;

    s.push("mohit");
    s.push("montea");
    s.push("monty");

    cout << "top element of stack is : "<< s.top() << endl;

    s.pop();

    cout << "top element of stack is : "<< s.top() << endl;

    
}