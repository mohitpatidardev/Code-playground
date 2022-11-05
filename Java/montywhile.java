import java.util.*;
public class montywhile{
    Scanner sc = new Scanner(System.in){

        int n = sc.nextInt();
        int i = 1;
        int sum = 0;
    
        whilel(i <= n){
            sum = sum+i;
            i++;
        }
    
        System.out.print(sum); 
    }
    
}
