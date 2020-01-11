package SeqListDisplay;

public class DisplaySeqList {
    private int[] date = null;
    private int size;

    public DisplaySeqList (){
        date = new int[100];
        size = 5;
    }

    public void display(){
        //依次打印出每个人元素
        //形如[1,2,3,4]
        String result = "[";
        for(int i = 0;i < size;i++){
            result += date[i];
            if(i < size-1){
                result += ",";
            }
        }
        result += "]";
        System.out.println(result);
    }
}