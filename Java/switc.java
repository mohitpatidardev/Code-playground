
import java.util.*;

public class switc {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);

        int num = sc.nextInt();

        switch (num) {
            case 1:
                System.out.print("you get burger");
                break;
            case 2:
                System.out.print("you get pizza");
                break;
            case 3:
                System.out.print("you get baba ji ka thullu");
                break;

            default:
                System.out.print("choose between 1 to 3");

        }
    }
}
