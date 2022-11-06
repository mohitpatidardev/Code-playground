import java.util.*;
public class productusinginput {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter value of a");
        int a = sc.nextInt();

        System.out.println("Enter value of b");
        int b = sc.nextInt();

        int product = a * b;
        System.out.println("The product of a and b is");
        System.out.print(product);

    }
}

