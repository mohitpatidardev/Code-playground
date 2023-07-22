import java.util.Scanner;
class BmiCalculatorWithSuggestion {
    public static void main(String[]args){
        Scanner scan = new Scanner(System.in);
        float weight, heightMeters, bmi;
        int heightFeet, heightInches;
        System.out.println("Enter your weight(in kgs) : ");
        weight = scan.nextFloat();
        System.out.println("Enter your height : ");
        System.out.print("Feet = ");
        heightFeet = scan.nextInt();
        System.out.print("Inches = ");
        heightInches = scan.nextInt();

        heightMeters = (float) ((heightFeet*0.3048) + (heightInches*0.0254));

        System.out.println("Your height in meters is : " + heightMeters);

        bmi = weight/(heightMeters*heightMeters);
        System.out.println("bmi = " + bmi);

        if(bmi >= 100){
            System.out.println("BMI can't be over 100");
        }
        else if(bmi >= 30){
            System.out.println("Obesity");
        }

        else if(bmi >= 25){
            System.out.println("Overweight");
        }

        else if(bmi >= 18.5){
            System.out.println("Healthy Weight");
        }

        else if(bmi >= 0){
            System.out.println("Under weight");
        }
        else{
            System.out.println("Invalid inputs");
        }

        if(bmi > 25){
            float idealWeight = (float)(25*heightMeters*heightMeters);
            System.out.println("You need to loose a minimum of " + (weight-idealWeight)+ " kgs.");
        }

        else if(bmi < 18){
             float idealWeight = (float)(18*heightMeters*heightMeters);
             System.out.println("You need to gain a minimum of " + (idealWeight-weight)+ " kgs.");
        }

        else{
            System.out.println("Congratulations you're fit!!!");
        }


       
    }
}
