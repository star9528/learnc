public class Output{
    public static void print(int num){
if(num>9){
    print(num/10);
} 
     System.out.println(num%10+" ");

    }
    public static void main(String[] args){
        int num=1234;
        print(num);
    }
}