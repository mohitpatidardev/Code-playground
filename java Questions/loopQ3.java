import java.util.*;
public class loopQ3 {
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter number which you want to print table ");

        int num = sc.nextInt();

        for(int i =1; i<=10; i++){
            
            System.out.println(num + "X" + i +"=" + num*i );
        }
       
    }
}
