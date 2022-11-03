// tut#17 (goto statement)
// also called jump statement in c.
// used to transfer program control to a predefined label.
// its use is avoided since it causes confusion for the fellow programmers in understanding to code.
// goto statement is preferable when we need to break multiple loop at the same time.

#include <stdio.h>
void goto1()
{
label:
    printf("we are inside label\n");
    goto end;
    printf("hello world\n");
    goto label;
end:
    printf("we are at end\n");
}

void goto2()
{
    int num;
    for (int i = 0; i < 8; i++)
    {
        printf("%d\n",i);
        for (int j = 0; j < 8; j++)
    {
            printf("Enter the number . Enter 0 to exit\n");
            scanf("%d",&num);
            if (num==0)
            {
                goto end;
            }
            
        }
        
    }
    end:
    printf("Thank you\n");
    
}

int main()
{
    // goto1();
    goto2();
    return 0;
}