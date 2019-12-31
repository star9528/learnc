public class Fib{
    public static int fib(int n){
        int last2=1;
        int last1=1;
        int cur=0;
        for(int i=3;i<=n;i++){
            cur=last1+last2;
            last2=last1;
            last1=cur;
        }
        return cur;
    }
    public static void main(String[] args) {
        int n=9;
        System.out.println(fib(n));
    }
}