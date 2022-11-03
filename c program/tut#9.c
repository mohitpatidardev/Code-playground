// tut#9 (format specifiers , constant , escape sequences )
#include <stdio.h>
#define P 45  // #define use for set a constant variable
int main ()
{ 
    int a = 6;
    float b = 8.345;
    const int Q = 100; // const use for set a constant variable
    // Q = 50; // cannot do this since Q is constant 
    // p = 46; // cannot do this since P is constant 
    printf("%d\n",P);
    printf("%d\n",Q);
    printf("The value of a is %d and The value of b is %f\n",a,b);
    printf("The value of b is %.2f\n",b);
    return 0;
}
/*
// escape sequences 
\a	 Alarm or Beep
\b	 Backspace
\f	 Form Feed
\n	 New Line
\r	 Carriage Return
\t	 Tab (Horizontal)
\v	 Vertical Tab
\\	 Backslash
\'	 Single Quote
\"	 Double Quote
\?	    Question Mark
\nnn	octal number
\xhh	hexadecimal number
\0	    Null

*/
