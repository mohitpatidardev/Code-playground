// Binary search
// prerequisite-Sorted arrays

public class binarysearch {
    public static int func(int number[], int key) {

        int start = 0;
        int end = number.length - 1;
        while (start <= end) {
            int mid = (start + end) / 2;
            if (number[mid] == key) {
                return mid;
            }
            if (number[mid] < key) {
                start = mid + 1;
            } else {
                end = mid - 1;
            }
        }
        return -1;
    }

    public static void main(String args[]) {
        int number[] = { 45, 8, 34, 97, 23, 54, 23, 67 };
        int key = 345;

        System.out.print("Index of given key is :" + func(number, key));
    }
}
