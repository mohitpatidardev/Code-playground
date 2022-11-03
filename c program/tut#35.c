// string functiion in c 
/*
string library --> #include <string.h>
*/

#include <stdio.h>
#include <string.h>

void strfunc()
{
    char s1[] = "cypher";
    char s2[] = "hash";
    char s3[34];
    
    // puts(strcat(s1, s2));
    
    // printf("The length of s1 is %d\n",strlen(s1));
    // printf("The length of s2 is %d\n",strlen(s2));
    
    // printf("The reversed string s1 is %s ",strrev(s1));
    // puts(strrev(s1));
    
    strcpy(s3 , strcat (s1,s2));
    puts(s3);
    
    printf("The strcmp fro s1 ,s2 returned %d ",strcmp(s1,s2));
}

void quickquiz()
{
    // allow user to enter two string and then concatenate then by saying that str1 is a friend of str2

    char s1[10];
    char s2[10];
    
    
    gets(s1);
    printf("s1 is %s\n",s1);
    
    gets(s2);
    printf("s2 is %s\n",s2);
    
    printf("%s is a friend of %s\n",s1,s2);
}

int main()
{
    strfunc();
    quickquiz();

    return 0;
}