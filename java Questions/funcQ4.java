import java.util.*;
public class funcQ4 {
    public static boolean palindrome(int number){
    
        int palindrome = number;
        int rev = 0;

        while(palindrome != 0){
            int rm = palindrome%10;

            rev = rev * 10 + rm;

            palindrome = palindrome / 10; 
        }

        if(number == rev){
            return true;
        }
        else{
            return false;
        }
    }

    public static void main(String arg[]){
        System.out.print(palindrome(121));

    }
}
