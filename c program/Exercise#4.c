// fibonachi serise 
//  recursive and itrative 

#include <stdio.h>
int fib_recursive(int n)
{

    if (n == 1 || n == 0)
        return 1;

    else
        return n * fib_recursive(n - 1);
}

int fib_itrative(int n)
{
    int a=1;
   for (int i = 0; i <n; i++)
        {
            a = a * (i+1);
            
        }
    return a;
}

int main()
{
    int c, p;
    c = fib_recursive(6);
    printf("%d\n" , c);
    p = fib_itrative(6);
    printf("%d\n", p);
    return 0;
}