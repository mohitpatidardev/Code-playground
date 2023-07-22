#include <bits/stdc++.h>
using namespace std;


void printArray(int array[] , int n){
    for(int i=0; i<n ; i++){
        cout << array[i] << " ";
    }
    cout << endl;
}

void revers(int array[] , int n){
    int start =0;
    int end = n-1;

    while(start<=end){
        swap(array[start] , array[end]);
        start++;
        end--;
    }
}


int main(){
    
    int array[10] = {3,6,2,7,2,8,12,6,23,15};

    revers(array , 10);
    printArray(array , 10);


}