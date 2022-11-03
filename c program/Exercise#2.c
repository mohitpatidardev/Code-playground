// who pass a math and scince both subject give 45 rupes and only scince to give 15 rupes and as well as for only math 15 rupes

#include <stdio.h>
int main ()
{
    int op;
    printf("Enter which subject you pass out\n for math Enter 1 \n for scince Enter 2 \n for both Enter 3\n");
    scanf("%d",&op);
    if (op==1){
        printf("congretulation your pass in math you got 15 rupees\n");
    }
    else if (op==2){
        printf("congretulation your pass in scince you got 15 rupees\n");
    }
    else if (op==3){
        printf("congratulation your pass in both subject you got 45 rupees\n");
    }
    else{
        printf("your Enter wrong number");
    }
    return 0;
}