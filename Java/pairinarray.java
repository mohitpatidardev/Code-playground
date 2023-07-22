public class pairinarray {
    public static void printpair(int number[]){
        int tp = 0;
        for(int i =0; i<number.length;i++){
            int curr = number[i];
            for(int j =i+1; j<number.length;j++){
                System.out.print("(" + curr + "," + number[j]+")");
                tp++;
            }
            System.out.println();
        }
        System.out.println("total number of pair is : "+ tp);
    }
    public static void main(String args[]){
        int number[] = {4,6,3,7,2,4,8};
        printpair(number);
    }
}
