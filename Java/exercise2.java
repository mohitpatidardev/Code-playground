// find area of square

import java.util.*;

public class exercise2 {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter the side of squar");

        int side = sc.nextInt();
        int area = side * side;
        System.out.println("The area of square is " + area);
    }
}


