public class keyserachin2darr {
    public static void searchkey(int matrix[][] , int key){
        // key = 34;

        for(int i=0; i<matrix.length;i++){
            for(int j=0; j<matrix[0].length ; j++){
                if(matrix[i][j]==key){
                    System.out.println("key found "+"(" +i+","+j+")");
                }   
            }
        }

    }
    public static void main(String args[]){
        int matrix[][] = {{3,5,7},
                        {34,3,45},
                    {76,23,87}};

         searchkey(matrix, 45);       
    }
}
