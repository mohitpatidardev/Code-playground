#include <bits/stdc++.h>
using namespace std;

void marge(int arr1[], int n, int arr2[], int m, int arr3[])
{
    int i = 0, j = 0, k = 0;

    while (i < n && j < m)
    {
        if (arr1[i] < arr2[j])
        {
            arr3[k++] = arr1[i++];
        }
        else
        {
            arr3[k++] = arr2[j++];
        }
    }
    while (i < n)
    {
        arr3[k++] = arr1[i++];
    }

    while (j < m)
    {
        arr3[k++] = arr2[j++];

    }
}

void PrintArray(int ans[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
}

int main()
{

    int arr1[5] = {1,3,5,9,10};
  
    int arr2[3] = {2,4,8};

    int arr3[8] = {0};

    marge(arr1, 5, arr2, 3, arr3 );

    PrintArray(arr3, 8);
}
