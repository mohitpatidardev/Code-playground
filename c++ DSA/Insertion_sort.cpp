#include <bits/stdc++.h>
using namespace std;

void Insertion_sort(int arr[], int n){
    for(int i =1; i<n ;i++){
        int temp = arr[i];
        int j = i-1;
        while (j >= 0 && arr[j] > temp) {
            arr[j + 1] = arr[j];
            j--;
        }
        
        arr[j+1] = temp ;
    }
}

void PrintArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int array[7] = {7, 1, 4, 9, 12, 16, 11};
    int n = 7;

    Insertion_sort(array, n);

    cout << "Sorted Array : ";

    PrintArray(array, n);
}