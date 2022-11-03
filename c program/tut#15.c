// tut#15 (for loop)
// the for loop is used to iterate the statement
/*
basic syntax of for loop

for (size_t i = 0; i < count; i++)
{
    // code
}
*/

#include <stdio.h>
void for1()
{
    for (int i = 1, j = 0; i <= 10; i++, j--)
    {
        printf("%d %d\n", i, j);
        i = i + 2;
    }
    printf("-----------****---------------\n");
}

void for2()
{
    for (int j = 1; j <= 10; j++)
    {
        for (int i = 1; i <= 10; i++)
        {
            printf("%d-%d\n", j, i);
        }
    }
    printf("-----------****---------------\n");
}

int main()
{
    for1();
    for2();
    return 0;
}
