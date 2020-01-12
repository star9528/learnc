package Add;

public class Test {
    private static void testAdd(){
        SeqListAdd seqListAdd = new SeqListAdd();
        seqListAdd.add(0,1);
        seqListAdd.add(0,2);
        seqListAdd.add(0,3);
        seqListAdd.add(0,4);
        seqListAdd.add(0,5);
        seqListAdd.display();

    }
    public static void testContains(){
        SeqListAdd seqListAdd = new SeqListAdd();
        seqListAdd.add(0,1);
        seqListAdd.add(0,2);
        seqListAdd.add(0,3);
        seqListAdd.add(0,4);
        seqListAdd.add(0,5);
        System.out.println(seqListAdd.contains(3));
    }
    private static void testSearch(){
        SeqListAdd seqListAdd = new SeqListAdd();
        seqListAdd.add(0,1);
        seqListAdd.add(0,2);
        seqListAdd.add(0,3);
        seqListAdd.add(0,4);
        seqListAdd.add(0,5);
        System.out.println(seqListAdd.search(3));
    }
    private static void testGetPos(){
        SeqListAdd seqListAdd = new SeqListAdd();
        seqListAdd.add(0,1);
        seqListAdd.add(0,2);
        seqListAdd.add(0,3);
        seqListAdd.add(0,4);
        seqListAdd.add(0,5);
        System.out.println(seqListAdd.getPos(2));
    }
    private static void testSetPos(){
        SeqListAdd seqListAdd = new SeqListAdd();
        seqListAdd.add(0,1);
        seqListAdd.add(0,2);
        seqListAdd.add(0,3);
        seqListAdd.add(0,4);
        seqListAdd.add(0,5);
        seqListAdd.setPos(2,2);
        seqListAdd.display();
    }
    public static void testRemove(){
        SeqListAdd seqListAdd = new SeqListAdd();
        seqListAdd.add(0,1);
        seqListAdd.add(0,2);
        seqListAdd.add(0,3);
        seqListAdd.add(0,4);
        seqListAdd.add(0,5);
        seqListAdd.remove(3);
        seqListAdd.display();
    }
    public static void main(String[] args) {
        //更严谨的测试方式
        //1.测试参数非法情况
        //2.测试扩容功能
        //3.尾插逻辑
        //4.普通位置插入
        //testAdd();
       //testContains();
        //testSearch();
        //testGetPos();
        //testSetPos();
        testRemove();
    }
}
