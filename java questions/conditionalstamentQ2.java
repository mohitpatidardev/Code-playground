// if tempretur grater then 100 print fever or less then print no fever

import java.util.*;
public class conditionalstamentQ2 {
    public static void main (String args[]){
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter your tempretur");

        double temp = sc.nextDouble();

        String var = (temp>=100)? "you have fever" : "you don't have";

        System.out.print(var);

    }
}
