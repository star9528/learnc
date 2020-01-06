public class toString2{
    public static void main(String[] args) {
        int[] arr = {1,2,3,4,5,6};
        System.out.println(tostring(arr));
    }
    public static String tostring(int[] arr){
        String ret = "[";
        for(int i = 0;i < arr.length;i++){
        ret = ret+arr[i];
        if(i!=arr.length-1)
        ret=ret+",";
        }
        ret=ret+"]";
        return ret;
    }
    
}