import java.util.Scanner;

public class toFound{
    public static void main(String[] args) {
        int[] arr = {9,5,2,7,6,8,0};
        System.out.println("请输入要查找的数字：");
        Scanner scanner = new Scanner(System.in);
        int found = scanner.nextInt();
        System.out.println(tofind(arr,found));
        scanner.close();
    }
    public static int tofind(int[] arr,int found){
        for(int i = 0;i < arr.length;i++){
            if(arr[i]==found)
            return 1;//表示已经找到
        }
        //表示没找到
        return -1;
    }
}