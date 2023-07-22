import java.util.Scanner;

public class aarrylinearsarch {

    public static int linearsarch(int number[] ,int key){

        for (int i = 0 ; i<number.length; i++){
            if(number[i] == key){
                return i;
            }
        }

        return -1;

    }
    public static void  main(String args[]){

        int number[] = {56 , 34, 56 , 34 , 345 , 65, 76, 43, 765};
        int key = 34565;

        int index =  linearsarch(number , key);

        if(index== -1){
            System.out.print("key not found");
        }
        else{
            System.out.print("the index of array is "+ index);
        }
    }
}
