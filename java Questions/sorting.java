public class sorting {
    public static void bubblesort(int arr[]) {
        for(int i=0;i<arr.length-1;i++){
            for(int j=0;j<arr.length-1-i;j++){
                if(arr[j]>arr[j+1]){
                    int temp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = temp; 
                }
            }
        } 
    }

    public static void selectonsort(int arr[]){
        for(int i = 0; i>arr.length-1;i++){
            int minpos = i;
            for(int j=i+1; j<arr.length;j++){
                if(arr[minpos]<arr[j]){
                    minpos =j;
                }
            }
            // swapping
            int temp = arr[minpos];
            arr[minpos] = arr[i];
            arr[i] = temp;
        }
    }

    public static void printArr(int arr[]){
        for(int i=0;i<arr.length;i++){
            System.out.print(arr[i]+" ");
        }
    }

    // public static void 
    
    public static void main(String args[]){
        int arr[] = {1,7,4,2,3,6,5};
        // bubblesort(arr);
        selectonsort(arr);
        printArr(arr);
        
    }
}
