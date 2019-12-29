public class Sum{
    public static int sum(int m){
        if(m==1){
            return 1;
        } else{
            return m+sum(m-1);
        }
    }
    public static void main(String[] args) {
        System.out.println(sum(10));
    }
}