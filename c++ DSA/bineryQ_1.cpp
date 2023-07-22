// find first and  last occurence of shorted array 


#include <iostream>
using namespace std;

int firstocc(int arr[] , int n ,int key){
    int s = 0;
    int e = n-1;

    int mid = s + (e-s)/2;
    int ans = -1;
    while(s<=e){
        if(arr[mid]==key){
            ans = mid;
            e = mid - 1;
        }
        else if(key> arr[mid]){
            s = mid +1;
        }
        else if(key < arr[mid]){
            e = mid-1;
        }

        mid = s + (e-s)/2;
    }
    return ans;
}



int lastocc(int arr[] , int n ,int key){
    int s = 0;
    int e = n-1;

    int mid = s + (e-s)/2;
    int ans = -1;
    while(s<=e){
        if(arr[mid]==key){
            ans = mid;
            s = mid + 1;
        }
        else if(key> arr[mid]){
            s = mid +1;
        }
        else if(key < arr[mid]){
            e = mid-1;
        }

        mid = s + (e-s)/2;
    }
    return ans;
}

int main(){

    int array[7] = {1,2,3,3,3,3,6};

    cout << "first occurence of 4 is " << firstocc(array , 7 , 3)<<endl;
    cout << "last occurence of 4 is " << lastocc(array , 7 , 3)<<endl;                                

}