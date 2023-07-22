#include <bits/stdc++.h>
using namespace std;

bool Search(int array[] , int n , int key){
    for(int i =0; i<n ; i++){
        if(array[i]==key){
            return 1;
        }
    }
    return 0;
}

int main(){

    int array[10] = {23,-3,7,2,8,-5,3,2,-7,10};
    int key = 8;

    bool found = Search(array , 10 , 8);

    if(found){
        cout<< "yes it's present ";
    }
    else{
        cout<< "no it's present ";
    }

}