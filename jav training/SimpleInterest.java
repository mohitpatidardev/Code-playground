import java.util.*;

class SimpleInterest{

	public static void main(String... args) {
		int principle;
		float rateOfInterest , noOfYears , simpleInterest , amount;
		
		Scanner scanner = new Scanner(System.in);
		
		System.out.println("Enter Principle :");
		principle = scanner.nextInt();
		
		System.out.println("Enter Rate :");
		rateOfInterest = scanner.nextFloat();
		
		System.out.println("Enter no of years :");
		noOfYears = scanner.nextFloat();
		
		simpleInterest = (principle*rateOfInterest*noOfYears)/100;
		amount = principle + simpleInterest;
		
		System.out.println("Principle =" + principle);
		System.out.println("rate of Interest =" + rateOfInterest);
		System.out.println("no of years =" + noOfYears);
		System.out.println("simple Interest =" + simpleInterest);
		System.out.println("Amount =" + amount);
	}
}

