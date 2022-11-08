import java.util.Scanner;

public class patternQ1 {
    public static void main(String args[]){

        Scanner sc = new Scanner(System.in);

        int totrows = sc.nextInt();
        int totcols = sc.nextInt();

        for(int i=1; i<=totrows;i++){
            for(int j=1; j<=totcols;j++){
                if(i==1 || i==totrows || j==1 || j==totcols){
                    System.out.print("*");
                }
                else{
                    System.out.print(" ");
                }

                
            }   

        System.out.println();
        }
    }
}