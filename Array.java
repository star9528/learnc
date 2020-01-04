public class Array{
    public static void main(String[] args){
        int[] arr={1,2,3,4,5,6};
        array0(arr);
        array(arr);
    }
    public static void array0(int[] arr){
        System.out.println("原数组");
        for(int i=0;i<arr.length;i++)
        System.out.println(arr[i]);
    }
    public static void array(int[] arr){
        System.out.println("修改后数组");
        for(int i=0;i<arr.length;i++){
            arr[i]=arr[i]*2;
            System.out.println(arr[i]);
        }
    }
}