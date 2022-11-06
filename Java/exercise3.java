// find 3 item cost with GST

import java.util.*;

public class exercise3 {
  
    public static void main (String args[]){
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter cost of pencil,pen or eraser");

        float pencil = sc.nextFloat();
        float pen = sc.nextFloat();
        float eraser = sc.nextFloat();

        float totalcost = (pencil+pen+eraser); 

        float bill = totalcost+(totalcost/100)*18;

        System.out.println("bill with GST "+ bill);

    }

}
