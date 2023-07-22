#include <bits/stdc++.h>

using namespace std;

int sumArray(int array[] , int n){
    int sum = 0;
    for(int i=0; i<n; i++){
        sum += array[i];
    }
    return sum;
}

int main(){
    int size;
    cin >> size;

    int array[100];

    for(int i =0 ; i< size ; i++){
        cin >> array[i];
    }

    cout<< "the sum of array is " << sumArray(array , size)  << endl;

}