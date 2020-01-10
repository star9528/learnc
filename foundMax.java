public class foundMax{
    public static void main(String[] args) {
        int[] arr = {9,5,2,7,6,3,0};
        System.out.println(toFind(arr));
    }
    public static int toFind(int[] arr){
        int max = arr[0];
        for(int i = 1;i < arr.length-1;i++){
            if(arr[i] > max){
                max=arr[i];
            }
        }
        return max;
    }
}