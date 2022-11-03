/*
unite conversions

km to miles
inches to feet
cm to inches
pound to kg
inches to metters
*/

#include <stdio.h>
int main()
{
    int num, a;
    label1:
    printf("Enter number for unit conversion:\n");
    printf("Enter 1 for km to miles\nEnter 2 for inches to foot \nEnter 3 for cm to inches \nEnter 4 for pound to kg\nEnter 5 for inches to metters");
    scanf("%d", &num);


    switch (num)
    {
    case 1:
        printf("Enter KM you want conver into miles");
        scanf("%d", &a);
        printf("%d km into %f miles", a, a * 0.621);
        break;
    case 2:
        printf("Enter inches you want conver into feet");
        scanf("%d", &a);
        printf("%d km into %f miles", a, a * 0.833);
        break;
    case 3:
        printf("Enter CM you want conver into inches");
        scanf("%d", &a);
        printf("%d km into %f miles", a, a * 0.394);
        break;
    case 4:
        printf("Enter pound you want conver into kg");
        scanf("%d", &a);
        printf("%d km into %f miles", a, a * 0.454);
        break;
    case 5:
        printf("Enter inches you want conver into meter");
        scanf("%d", &a);
        printf("%d km into %f miles", a, a * 0.0254);
        break;
    default:
        goto label1;
    }

    return 0;
}