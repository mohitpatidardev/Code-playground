#include <bits/stdc++.h>
using namespace std;

void selection_sort(int arr[] , int n){
    int min_idx , i ,j;

    for(i =0; i<n-1 ; i++){
        min_idx = i;

        for(j = i+1; j<n ; j++){
            if(arr[j] < arr[min_idx])
            min_idx =j;
        }
            swap(arr[min_idx], arr[i]);
    }
}

void printArray(int arr[], int n){
    for(int i =0; i<n ; i++){
        cout << arr[i] << " ";
    }
}

int main(){

    int array[] = {4,2,5,10,7,74,8};
    int n = 7;
    selection_sort(array , 7);
    cout<<"Sorted Array :" ;
    printArray(array , 7);
    return 0;
}