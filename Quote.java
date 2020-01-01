public class Quote{
    public static void main(String[] args) {
        int num=0;
        func(num);
        System.out.println("num="+num);
    }
    public static void func(int x){
        x=10;
        System.out.println("x="+x);
    }
}