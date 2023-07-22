import java.util.*;

public class EmiOnLoan {
    public static void main(String[] args){
        int principle ; 
        float time , rate;
        float emi;
        Scanner scanner = new Scanner(System.in);

        System.out.println("Enter total amount");
        principle = scanner.nextInt();

        System.out.println("Enter rate of Interest");
        rate = scanner.nextFloat();

        System.out.println("Enter time in year");
        time= scanner.nextFloat();

        float ratePerMonth = (rate/12)/100 ;
        float timePerMonth = time*12;

        emi = (float)(principle*ratePerMonth*Math.pow(1+ratePerMonth,timePerMonth));
        emi /= (Math.pow(1+ratePerMonth, timePerMonth)-1);

        System.out.println("Your montly EMI is " + emi);

    }
}
