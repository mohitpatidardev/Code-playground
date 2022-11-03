// tut#16 (break and continue)

#include <stdio.h>

void break1()
{
    {
        int i, age;
        for (int i = 0; i < 10; i++)
        {
            printf("%d\nEnter you  age :", i);
            scanf("%d", &age);
            if (age > 10)
            {
                printf("Enter valid age\n");
                break;
            }
            printf("you Enter %d\n", age);
        }
    }
}

void continue1()
{
    int i, age;
    for (int i = 0; i < 10; i++)
    {
        printf("%d\n Enter you age:", i);
        scanf("%d", &age);

        if (age > 10)
        {
            continue; // the continue statement skips some code inside the loop and continue with the next iteration.
        }

        printf("hello world\n");
        printf("cypher is good boy\n");
    }
}

int main()
{
    // break1();
    continue1();
    return 0;
}