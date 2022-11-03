// string 

/*
Is string A data type in c ?

* NO
* we have char,int,float and other data type but no 'string' data type in c .
* string is not a supported data type in c but it is a very useful concept used to model real world entities like name ,city etc.
* we express string using an array of characters terminated by a null character ('\0')

What are string in c 

* string array of character terminated by NULL character 
* string in c is created by creating an array of characters
* we need an extra character ('\0' or null character) to tell the compiler the strring ends here.

character array --> char name[] = "harry";
                    char name[] = {'h','a','r','r','y','\0'} 
*/

#include <stdio.h>
void printstr(char str[])
{
    int i=0;
    while(str[i]!='\0')
    {
        printf("%c",str[i]);
        i++;
    }
}
int main()
{
    // char str[] = {'m','o','n','t','y','\0'};
    // char str[] = "monty";
    // printstr(str);
    char str[34];
    gets(str);
    printf("using printf %s",str);
    return 0;
}