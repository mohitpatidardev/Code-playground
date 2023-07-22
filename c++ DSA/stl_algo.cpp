#include <bits/stdc++.h>
using namespace std;

int  main(){
    vector<int> v;

    v.push_back(5);
    v.push_back(1);
    v.push_back(8);
    v.push_back(4);
    v.push_back(6);

    cout<<"finding 6 : "<< binary_search(v.begin() , v.end() ,6) << endl;

    int a = 5;
    int b = 3;

    cout << "max is : " << max(a,b) << endl;
    cout << "min is : " << min(a,b) << endl;

    swap(a,b);
    cout << " after swap a is : " << a << endl;

    string s = "abcd";
    reverse(s.begin() , s.end());

    cout << "reversed string is : " << s << endl ;

    rotate(v.begin() , v.begin()+2 ,  v.end());

    cout << "after rotate vector " <<endl;

    for(int i :v){
        cout << i << " ";
    }cout << endl;

    sort(v.begin() , v.end());
    cout << "sorted vector " << endl;
    for(int i :v){
        cout << i << " ";
    }cout << endl;
}