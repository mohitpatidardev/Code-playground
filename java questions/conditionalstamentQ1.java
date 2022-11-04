import java.util.*;
public class conditionalstamentQ1 {
    public static void main (String args[]){
        Scanner sc = new Scanner(System.in);

        int num = sc.nextInt();
        
        String var = (num>0)? "POsitive" : "navative";

        System.out.print(var);
    }
}
