package learn;

//一个节点
class Node {
    public int date;//数据
    public Node next;//下一个节点的位置
    public Node (int date) {
        this.date = date;
    }
}


public class LinkedList {
    //管理所有的节点。 只需要记录头结点的位置即可
    //初始情况下head为null，此时表示空链表（不带傀儡节点）
    private Node head = null;
    public void addFirst(int date) {
        //1.根据date链表构建一个链表节点（Node对象）
        Node node = new Node(date);
        //2.如果链表为空
        if(head == null){
            head =node;
            return;
        }
        //3.如果链表不为空
        if(head != null){
         node.next = head;
         head = node;
        }
    }
    public void addLast(int date){
        //1.根据date构造一个Node对象
        Node node = new Node(date);
        //2.如果链表为空
        if(head == null){
            head = node;
            return;
        }
        //3.如果链表非空，需要先找到这个链表末尾的最后一个节点
        Node tail = head;
        while(tail.next != null){
            tail = tail.next;
        }
        //循环结束之后，tail就对应到最后一个节点可
        tail.next = node;
    }
    public int getSize(){
        int size = 0;
        for(Node cur = head;cur !=null;cur = cur.next){
            size++;
        }
        return size;
    }
    public boolean addIndex(int index, int date){
        int size = getSize();
        //1.判断index是否有效
        if(index < 0||index >size){
            //无效，则插入失败
            return false;
        }
        //2.如果index=0，这是头插
        if(index == 0){
            addFirst(date);
            return true;
        }

        //3.如果index=size，这是尾插
        if(index == size){
            addLast(date);
            return true;
        }
        //4.如果取的是中间值
        //a)先找到index的前一个节点的位置
        Node prev = getPos(index - 1);
        Node node = new Node(date);
        //b)插入新节点
        node.next = prev.next;
        prev.next = node;
        return true;
    }
    //给定下标index，找到对应节点
    public Node getPos(int index){
        Node cur = head;
        for(int i = 0;i < index;i++){
            //cur.next操作之前必须保证cur是非null
            cur = cur.next;
        }
        return cur;
    }
    public void display() {
        //把链表中的每个元素都打印出来
        for (Node cur = head; cur != null; cur = cur.next) {
            System.out.print(cur.date + " ");
        }
        System.out.println();
    }
    public boolean contains(int toFind){
        for(Node cur = head;cur != null;cur = cur.next){
            if (cur.date == toFind){
                return true;
            }
        }
        return false;
    }
    public void remove(int toRemove){
        //1.如果要删除元素为头结点，特殊处理。
        if(head.date == toRemove) {
        head = head.next;
        return;
        }
        //2.如果要删除元素不是头结点，找到要删除节点的前一个节点位置
        Node prev = searchPrev(toRemove);
        //3.修改引用的指向，完成删除
        //prev.next = prv.next.next;
        Node toDelete = prev.next;
        prev.next = toDelete.next;
    }
    private Node searchPrev(int toRemove){
        for(Node cur = head;cur != null
                && cur.next != null;cur = cur.next){
            if(cur.next.date == toRemove){
                return cur;
            }
        }
        return null;
    }
}

