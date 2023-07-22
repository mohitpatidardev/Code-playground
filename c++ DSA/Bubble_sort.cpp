#include <bits/stdc++.h>
using namespace std;

void bubble_sort(int arr[] , int n){
    bool swapped = false;
    for(int i=1 ; i<n ; i++){
        for(int j=0 ; j<n-i ; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j] , arr[j+1]);
                swapped = true;
            }
        }
        if(swapped==false)
            break;
    }
}

void PrintArray(int arr[] , int n ){
    for(int i=0; i<n ;i++){
        cout << arr[i] << " ";
    }
}

int main() {
    int array[] = {3,6,1,8,12,16,11,47};
    int n =8;
    
    bubble_sort(array  , n );
    cout << "sorted" << " " ;
    PrintArray(array , n);

    return 0;
}