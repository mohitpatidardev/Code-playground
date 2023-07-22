import java.util.*;
class PrimeList {
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);

        int i,j;

        System.out.println("Enter value of a and b with e for exclude and i for include ");
        String  a = scan.next();
        String  b = scan.next();

        // int value
        String intValueA = a.replaceAll("[0-9]", "");
        String intValueB = b.replaceAll("[0-9]", "");

        int aNum = Integer.parseInt(intValueA);
        int bNum = Integer.parseInt(intValueB);

        // char value
        String strValueA = a.replaceAll("[a-z]", "");
        String strValueB = b.replaceAll("[a-z]", "");


        if(strValueA.equals("i") && strValueB.equals("i")){
            // System.out.println("both i ");
            for( i= aNum; i<=bNum ; i++){
                for(j = 2; j<=i ;j++){
                    if(i%j==0){
                        break;
                    }
                }    
                if(i==j){
                    
                    System.out.print(j + " ");
                }
            }
        }

        else if(strValueA.equals("e") && strValueB.equals("e")){
            // System.out.println("both e");

            for( i=aNum+1; i<bNum ; i++){
                for(j = 2; j<=i ;j++){
                    if(i%j==0){
                        break;
                    }
                }               
                if(i==j){
                    System.out.print(j + " ");
                }
            }
            
        }

        else if(strValueA.equals("i") && strValueB.equals("e")){
            // System.out.println("i e ");

            for( i= aNum; i<bNum ; i++){
                for(j = 2; j<=i ;j++){
                    if(i%j==0){
                        break;
                    }
                }               
                if(i==j){
                    System.out.print(j + " ");
                }
            }
        }

        else if(strValueA.equals("e") && strValueB.equals("i")){
            // System.out.println("e i ");

            for( i= aNum+1; i<=bNum ; i++){
                for(j = 2; j<=i ;j++){
                    if(i%j==0){
                        break;
                    }
                }               
                if(i==j){
                    System.out.print(j + " ");
                }
            }
        }
        else{
            System.out.println("Invalid Input");
        }

    }
}