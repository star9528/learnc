public class Parameter{
    public static void main(String[] args) {
        int[] arr={1,2,3};
        func(arr);
        System.out.println("arr[0]="+arr[0]);
    }
    public static void func(int[] a){
        a[0]=20;
        System.out.println("a[0]="+a[0]);
    }
}