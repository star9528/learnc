package Add;

public class SeqListAdd {
        private int[] datas = null;
        private int size;

        public int getSize() {
            //size 这个成员只能提供get方法，不能提供set
            //size是通过后面增删的方法来进行维护的
        return size;
         }

        public SeqListAdd (){
            datas = new int[100];
            size = 0;
            }

        public void display(){
            //依次打印出每个人元素
            //形如[1,2,3,4]
            String result = "[";
            for(int i = 0;i < size;i++){
                result += datas[i];
                if(i < size-1){
                    result += ",";
                }
            }
            result += "]";
            System.out.println(result);
        }

    public void add(int pos,int data) {
        //判定pos是否是有效值
        //
        if (pos < 0 || pos > size) {
            return;
        }
        //扩容的支持，顺序表如果容量不够，就能自动扩容
        if (size > datas.length) {
            int[] newDatas = new int[2 * datas.length];
            for (int i = 0; i < datas.length; i++) {
                newDatas[i] = datas[i];
            }
            datas = newDatas;
        }

        //1.尾插的情况
        //把新元素放到下表为size的地方
        if (pos == size) {
            this.datas[pos] = data;
            size++;
            return;
        }
        //2.普通位置插入
        for (int i = size - 1; i >= pos; i--) {
            datas[i + 1] = datas[i];
        }
        datas[pos] = data;
        size++;
    }
    public boolean contains(int toFind) {
        //循环访问每一个元素进行比较
        //如果发现某个元素和toFind相等
        //如果所有元素都找完了，也没有找到相等的，就返回false
        for (int i = 0; i < size; i++) {
            if(datas[i] == toFind){
                return true;
            }
        }
        return false;
    }
    public int search(int toFind){
        for (int i = 0; i < size; i++) {
            if(datas[i] == toFind){
                return i;
            }
        }
        return -1;
    }
    public int getPos(int Pos){
      return datas[Pos];
    }
    public void setPos(int Pos,int data){
            datas[Pos] = data;
    }
    public void remove(int toRemove){
            //查找toRemove对应的下标
        int pos = search(toRemove);
        //没找到要删除的元素
        if (pos == -1){
            return;
        }
        //如果下标是最后一个元素，直接尾删除
         if(pos == size-1)  {
             size--;
             return;
         }
         //如果下表是中间元素，需要先搬运，再删除
        for (int i = pos; i < size-1; i++) {
                datas[i] = datas[i+1];
        }
         size --;
    }
    public void clear(){
            size = 0;
    }
}