#include <iostream>
using namespace std;

void fabonacci()
{
    int n = 10;
    int a = 0;
    int b = 1;
    cout << a << " " << b << " ";
    for (int i = 1; i <= n; i++)
    {
        int nextnuber = a + b;
        cout << nextnuber << " ";
        a = b;
        b = nextnuber;
    }
}

void prime(){
    int n;
    cin >> n;

    for (int  i= 2 ; i<n; i++){
        if(n%i==0){
            cout<<" not  a prime number";
            break;
        }
        else{
            cout << " prime number ";
            break;
        }
    }
}

void letcod(){
    int n ;
    cin >> n;

    int prod = 1;
    int sum = 0;
    while (n!=0){
        int digit = n%10;
        prod = prod * digit;
        sum = sum + digit;

        n = n/10;
        // int ans = prod - sum;
        // cout << ans;
    }
            int ans = prod - sum;
        cout << ans;
}
int main()
{
    // fabonacci();
    // prime();
    letcod();
}