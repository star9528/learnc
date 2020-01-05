import java.util.Arrays;


public class Copy{
    public static void main(String[] args) {
        int[] arr = {1,2,3,4,5,6};
        int[] newArr = Arrays.copyOf(arr,arr.length);
        System.out.println("newarr:"+Arrays.toString(newArr));
    }
}