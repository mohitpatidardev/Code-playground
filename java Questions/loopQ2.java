

import java.util.*;
public class loopQ2 {
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);

        int fact = 1;

        System.out.println("Enter number to find factorial");
        int num = sc.nextInt();

        for(int i = 1 ; i<=num;i++){
            fact*=i;
        }

        System.out.print("factorial : "+fact);
    }
}
