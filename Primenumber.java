import java.util.Scanner;

public class Primenumber{
    public static void main(String[] args) {
        Scanner scanner=new Scanner(System.in);
        System.out.println("请输入一个数：");
        int i=1;
        int num=scanner.nextInt();
        for(i=2;i<=num/2;i++){
            int t=num%i;
            if(t==0){
               break;
            }
        }
        if(i<=num/2){
            System.out.println("这不是素数！");
        } else System.out.println("是素数！");
    }
}