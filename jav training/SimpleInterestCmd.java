class SimpleInterestCmd{
    public static void main(String[]args){
        int principle = Integer.parseInt(args[0]);
        float rate = Float.parseFloat(args[1]);
        float time = Float.parseFloat(args[2]);
        float interest = (principle*rate*time)/100;
        System.out.println("The calculated Interest is "+interest);
        System.out.println("The final amount is " + (interest+principle) );
    }
}