#include <bits/stdc++.h>
using  namespace std;

int squar_root(int number){
    int s = 0;
    int e = number-1;

    int mid = s + (e-s)/2;
    int ans = -1;

    while(s<=e){
        if((mid*mid)==number){
            return mid;
        }

        if((mid*mid)>number){
            e = mid-1;
        }
        else if((mid*mid)<number){
            ans = mid;
            s = mid+1;
        }

        mid = s + (e-s)/2;
    }
    return ans;
}

double morePrecision(int number , int precision , int tempSol){
    double factor = 1;
    double ans = tempSol;

    for(int i= 0 ; i<precision ; i++){
        factor = factor/10;

        for(double j=ans ; j*j<number ; j+=factor){
            ans = j;
        }
    }
    return ans;
}

int main (){
    int number;
    cout << "Enter a number" << endl;
    cin >> number;

    int tempSol = squar_root(number);

    cout<< "sqrt is : " << morePrecision(number , 3 , tempSol) << endl;

    return 0;
}