#include <bits/stdc++.h>
using namespace std;

char toLowercase(char ch)
{
    if (ch >= 'a' && ch <= 'z')
    {
        return ch;
    }
    else
    {
        char temp = ch - 'A' + 'a';
        return temp;
    }
}

bool palindrome(char str[], int n)
{
    int s = 0;
    int e = n - 1;

    while (s < e)
    {
        if (toLowercase(str[s]) != toLowercase(str[e]))
        {
            return 0;
        }
        else
        {
            s++;
            e--;
        }
    }
    return 1;
}

int getlen(char str[])
{
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}

int main()
{

    char str[10];
    cout << "Enter String" << endl;
    cin >> str;

    int len = getlen(str);
    // cout << len;

    cout << "palindrome or not : " << palindrome(str, len);
}