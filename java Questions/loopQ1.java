import java.util.Scanner;
import java.util.*;
public class loopQ1{
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);

        int oddsum = 0;
        int evensum = 0;

        int choice;
        int number;


        do{
            System.out.println("Enter number:");
            number = sc.nextInt();

            if (number%2==0){
                evensum+=number;
            }
            else
            {
                oddsum+=number;
            }

            System.out.print("press 1 to continue 0 to end the programe");
            choice = sc.nextInt();

        }
        while(choice == 1);

        
        System.out.println("The sum of all even number is "+ evensum);
        System.out.println("The sum of all odd number is "+ oddsum);

    }
}