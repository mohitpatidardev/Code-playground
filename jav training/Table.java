import java.util.*;
public class Table {
    public static void main (String [] args){
        Scanner scan = new Scanner(System.in);

        int number , lowerLimit , upperLimit , i;

        System.out.println("Enter the number");
        number = scan.nextInt();

        System.out.println("Enter the lower limit");
        lowerLimit = scan.nextInt();

        System.out.println("Enter the upperLimit");
        upperLimit = scan.nextInt();

        for(i=lowerLimit ; i<=upperLimit ; i++){
            System.out.println(number + "X" + i + "=" + (number*i));
        }

        // i=lowerLimit ;
        // while(i<=upperLimit){
        //     System.out.println(number + "X" + i + "=" + (number*i));
        //     i++;
        // }
    }
}
