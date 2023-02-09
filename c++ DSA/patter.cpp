#include <iostream>
using namespace std;

void patten1()
{
    int n;
    cin >> n;

    int i = 1;

    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << "*";
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
}

void pattern2()
{
    int n;
    cin >> n;

    int i = 1;

    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << i;
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
}
void patt3()
{
    int n;
    cin >> n;

    int i = 1;

    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            // cout << n-j+1; // n.....3 2 1
            cout << j; // 1 2 3
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
}
void patt4()
{
    int n;
    cin >> n;

    int row = 1;

    while (row <= n)
    {
        int col = 1;
        while (col <= row)
        {
            cout << "*";
            col = col + 1;
        }

        cout << endl;
        row = row + 1;
    }
}

void patt5()
{
    int n;
    cin >> n;

    int row = 1;

    while (row <= n)
    {
        int col = 1;
        while (col <= row)
        {
            cout << row;
            col = col + 1;
        }

        cout << endl;
        row = row + 1;
    }
}
int main()
{
    // patter1();
    // pattern2();
    // patt3();
    // patt4();
    patt5();
    return 0;
}