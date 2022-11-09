import java.util.Scanner;


public class funcQ2 {
    public static void avrg_three(){
        Scanner sc = new Scanner(System.in);

        int a = sc.nextInt();
        int b = sc.nextInt();
        int c = sc.nextInt();


        System.out.println("the avrg of three number is "+(a+b+c)/3);
    }

    public static void main(String args[]){
        
        System.out.println("Enter value of a ,b ,c");
        avrg_three();
    }
}
