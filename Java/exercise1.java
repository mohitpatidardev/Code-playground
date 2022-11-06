//  find avg of three number

import java.util.*;

public class exercise1 {
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter value of A,B and C");

        int a = sc.nextInt();
        int b = sc.nextInt();
        int c = sc.nextInt();

        int avg = (a+b+c)/3;
        System.out.println("the avg of three number is " + avg);
    
    }

}
