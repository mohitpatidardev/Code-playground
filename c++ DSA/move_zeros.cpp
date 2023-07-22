#include <bits/stdc++.h>
using namespace std;

void move_zero(int arr[] , int n){
    int nonzero=0;

    for(int j=0; j<n ; j++){
        if(arr[j]!=0){
            swap(arr[j] , arr[nonzero]);
            nonzero++;
        }
    }
}

void print(int arr[] ,int n){
    for(int i = 0 ; i<n; i++){
        cout << arr[i] << " ";
    }
}

int main(){

    int arr[] = {0,1,0,2,3,0,0};
    move_zero(arr , 7);
    print(arr , 7);

}