public class ArraySortedOrNot {

    static boolean arraySortedOrNot(int[] arr, int n) {
        while (n > 1) {
            if (arr[n - 1] < arr[n - 2]) {
                return false;
            }
            n--;
        }
        return true;
    }

    public static void main(String[] args) {
        int[] arr = {1, 2, 2, 4, 5};
        int n = arr.length;

        if (arraySortedOrNot(arr, n)) {
            System.out.println("Array is sorted");
        } else {
            System.out.println("Array is not sorted");
        }
    }
}