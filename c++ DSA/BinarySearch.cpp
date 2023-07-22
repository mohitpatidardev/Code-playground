#include <bits/stdc++.h>

using namespace std;

int binarySearch(int arr[] , int size , int key){
    int start = 0;
    int end = size-1;

    int mid = start + (end- start)/2;

    while(start<=end){
        if(arr[mid]==key){
            return mid;
        }

        if(key>arr[mid]){
            start = mid+1;
        }
        else{
            end = mid -1;
        }
        
        mid = start + (end- start)/2;
    }
    return -1;
}

int main(){
    int even[6] = {3,5,6,8,10,15};
    int odd[5] = {4,6,12, 23,30};


    int index = binarySearch(even , 6 , 10);
    cout << " the index of 10 is  "<< index << endl;
}