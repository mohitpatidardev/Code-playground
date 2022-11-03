// tut#13 (do whiel loop)
//  do while loop executes at least once

#include <stdio.h>
int main()
{
    int num, index = 0;
    printf("Enter a number:\n");
    scanf("%d", &num);
    do
    {
        index = index + 1;
        printf("%d\n", index);
    } while (index < num);

    return 0;
}