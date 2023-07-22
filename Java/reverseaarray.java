public class reverseaarray {
    public static void revers(int number[]){
        int first = 0;
        int last = number.length-1;

        while(first < last){

            int temp = number[last];
            number[last] = number[first];
            number[first] = temp;

            first++;
            last--;

        }

    }
    public static void main(String args[]){
        int number[] = {45,7,23,66,64,23,54};

        revers(number);

        for(int i =0; i<number.length; i++){
            System.out.print(number[i]+ " ");
        }
    }
}
