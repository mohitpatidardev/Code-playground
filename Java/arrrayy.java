import java.util.Scanner;

public class arrrayy {
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);

        int marks[] = new int[50]; 

         marks[0] = sc.nextInt();
         marks[1] = sc.nextInt();
         marks[2] = sc.nextInt();

        System.out.println("math :"+marks[0]);
        System.out.println("phy :"+marks[1]);
        System.out.println("eng :"+marks[2]);

        marks[0] = marks[0]+5;

        System.out.println("math :"+marks[0]);



    } 
}
