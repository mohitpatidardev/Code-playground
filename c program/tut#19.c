
// tut#19 (Function)

/*
1.) The basic syntax of a C 

return_type function_name (data_parameter1 , data_parameter2,....){
    code to be executed 
}

2.) type of function
* library function --> function included in c header files.
* user Defined funtion --> Function created by c programmer to reduce complexity of a programer.

3.) Function
* without arguments and without return value 
* without arguments and with return value 
* with arguments and without return value 
* with arguments and with return value 

*/


// * with arguments and with return value 

#include <stdio.h>
int sum(int a , int b)
{
    return a+b;
}

// void is type of (with arguments and without return value) 

void star()
{
    int i,a;
    for (int i = 0; i < a; i++)
    {
        printf("%c\n",'*');
    }
    
}

//  without arguments and with return value 

int takenumber()
{
    int i;
    printf("Enter a number :\n");
    scanf("%d",&i);
    return i;
}

// without arguments and without return value

void func5()
{
    int a = 50 , b = 40;
    printf("sum of  a & b is %d" , a +b);

}
int main ()
{
    int a ,b, c , s;
    a = 6;
    b = 4;
    c = sum(a,b);
    printf("The sum is %d\n",c);
    star(7);
    s = takenumber();
    printf("The number Enterd is is %d\n",s);
    func5();
    return 0;
}