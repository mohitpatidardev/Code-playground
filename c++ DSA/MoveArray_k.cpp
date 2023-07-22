// logic done code not run ............

#include <bits/stdc++.h>
using namespace std;

void move_with_k(int arr[] , int k){
    
    vector<int> temp(arr.size());

    for(int i=0 ; i<arr.size() ; i++){
        temp[(i+k)%arr.size()] = arr[i];
    }  
}
void printarray(int temp[] ){
    for(int i=0 ; i<temp.size() ;i++){
        cout << temp[i]<< " ";
    }cout << endl ;
}

int main(){
    vector<int> arr ;

    arr.push_back(4);
    arr.push_back(6);
    arr.push_back(2);
    arr.push_back(1);
    arr.push_back(8);
    arr.push_back(7);

    move_with_k(arr , 2);
    printarray(arr);
}