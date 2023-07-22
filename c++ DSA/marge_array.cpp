// incomplete..........

#include <bits/stdc++.h>
#include <vector>
using namespace std;

void merge(vector<int> nums1, int m, vector<int> nums2, int n)
{
    int i = m - 1, j = n - 1, k = m + n - 1;
    while (i >= 0 && j >= 0)
    {
        if (nums1[i] > nums2[j])
        {
            nums1[k] = nums1[i];
            i--;
            k--;
        }
        else
        {
            nums1[k] = nums2[j];
            j--;
            k--;
        }
    }
    while (i >= 0)
        nums1[k--] = nums1[i--];
    while (j >= 0)
        nums1[k--] = nums2[j--];
}

// void PrintArray(int num1)
// {
//     for (auto i : num1) {
//         cout << i << sep;
//     }
 
//     cout << endl;
// }

int main()
{
    vector<int> num1;
    vector<int> num2;

    num1.push_back(5);
    num1.push_back(3);
    num1.push_back(7);

    num2.push_back(1);
    num2.push_back(6);
    num2.push_back(4);

    merge(num1, 3, num2, 3);
    // PrintArray(num1);

    for (int i : num1) {
        cout << num1[i] << " ";
    }
}