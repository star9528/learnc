public class Array2{
    public static void main(String[] args){
        int[] arr = {1,2,3,4,5,6};
        array2(arr);
        int[] arr2 = array3(arr);
        array2(arr2);
    }
    public static void array2(int[] arr){
        System.out.println("原数组");
        for(int i = 0;i < arr.length;i++){
            System.out.println(arr[i]);
        }
    }
    public static int[] array3(int[] arr){
        System.out.println("现数组：");
        int[] ret=new int[arr.length];
        for(int i = 0;i < arr.length;i++){
        ret[i] = arr[i] * 2;
        }
        return ret;
    }
}