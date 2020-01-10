package learn;

public class TestLinkedList {
    private static void testAddFrist(){
        LinkedList linkedList = new LinkedList();
        linkedList.addFirst(1);
        linkedList.addFirst(2);
        linkedList.addFirst(3);
        linkedList.addFirst(4);
        linkedList.addFirst(5);
        linkedList.display();
    }
    public static void testAddLast(){
        LinkedList linkedList = new LinkedList();
        linkedList.addLast(1);
        linkedList.addLast(2);
        linkedList.addLast(3);
        linkedList.addLast(4);
        linkedList.addLast(5);
        linkedList.display();
    }
    private static void testAddIndex(){
        LinkedList linkedList = new LinkedList();
        linkedList.addIndex(0,1);
        linkedList.addIndex(1,2);
        linkedList.addIndex(1,3);
        linkedList.addIndex(1,4);
        linkedList.addIndex(1,5);
        linkedList.display();
    }
    public static void testAddContain (){
        LinkedList linkedList = new LinkedList();
        linkedList.addIndex(0,1);
        linkedList.addIndex(1,2);
        linkedList.addIndex(1,3);
        linkedList.addIndex(1,4);
        linkedList.addIndex(1,5);
        System.out.println(linkedList.contains(1));
    }
    public static void testAddRemove(){
        LinkedList linkedList = new LinkedList();
        linkedList.addLast(1);
        linkedList.addLast(2);
        linkedList.addLast(3);
        linkedList.addLast(4);
        linkedList.addLast(5);
        linkedList.remove(3);
        linkedList.display();
    }

    public static void main(String[] args) {
      //testAddFrist();
      //testAddLast();
      //testAddIndex();
        // testAddContain();
        testAddRemove() ;
    }
}
