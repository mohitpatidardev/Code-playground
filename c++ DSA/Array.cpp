#include <bits/stdc++.h>

using namespace std;

// void printArray(int arry[] , int size){
//     for(int i=0 ; i<size ;i++){
//         cout<<arr[i]<<endl;
//     }
// }


int getMax(int num[], int n){

    int max = INT_MIN;

    for(int i=0; i<n ; i++){
        if(num[i]> max){
            max = num[i];
        }
    }

    return max;
}

int getMin(int num[], int n){

    int mini = INT_MAX;

    for(int i=0; i<n ; i++){
        mini = min(mini , num[i]); 
        // if(num[i]> min){
        //     min = num[i];
        // }
    }
    return mini;
}


int main(){
    // int size;
    // int number [20];
    // // cout<<endl<<number[1]<<endl;

    // int secArray[20] = {4, 56, 34 , 32 ,43};

    // for(int i=0; i<3 ; i++){
    //     cout<< secArray[i]<< " " ;
    // }

    // // third
    // int thirArray[10] = {5};

    // for(int i=0; i<3 ; i++){
    //     cout<< endl << thirArray[i]<< " ";
    // }

    // forth
    // int array[10] = {5,3,6,2,7,2,8,3,6,10};

    // for(int i=0; i<10 ; i++){
    //     cout<< Array[i]<< " ";
    // }

    // printArray(Array , 10);


    // question

    int size;
    cin >> size;

    int num[100];
    // taking array value from user 

    for(int i = 0; i<size ;i++){
        cin >> num[i];
    }

    cout<< "max value of array is " << getMax(num , size) << endl;
    cout<< "min value of array is " << getMin(num , size) << endl;

    return 0;
}