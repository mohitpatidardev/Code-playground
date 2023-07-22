import java.util.*;
import java.lang.*;
import java.io.*;

public class codecheftest {
    public static void func(){
        
        Scanner sc = new Scanner(System.in);
        int x =0;
		int[] array = new int[4];  
        for(int i=0; i<4; i++)  
        {  
        array[i]=sc.nextInt(); 
        if(array[i]>=10){
            x=x+1; 
        } 
        }
        System.out.println(x);

    }    

	public static void main (String args[]){

     func();
	
}

}
