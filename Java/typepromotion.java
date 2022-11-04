import java.util.*;

public class typepromotion {
    public static void main(String args[]){
        // char a = 'a';
        // char b = 'b';
        // System.out.println((int)(b));
        // System.out.println((int)(a));
        // System.out.println(b-a);

        // short a = 5;                        // diffrente data type conversion in one data type
        // byte b = 25;
        // char c = 'c';
        // byte bt = (byte)(a + b + c);
        // System.out.println(bt);


        // if one operand is long float or double the whole expression is promoted to long,float,or double respectively.

        int a = 10;
        // flaot b = 20.25f;
        long c = 25;
        double d = 30;
        double ans = a+ c + d;
        System.out.println(ans);

    }
}


// Type promotion in Expressions

/*
 
 * java automatically promotes each byte,short,or char oprand to int when evaluating an expression.
 
 * if one operand is long float or double the whole expression is promoted to long,float,or double respectively. 
 
 */