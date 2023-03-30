public class LL {
    Node head;
    class Node
    {
        String data;
        Node next;
        Node(String data)
        {
            this.data=data;
            this.next=null;
        }
    }

    //add first and last    
    public  void addFirst(String data) {
        Node newNode=new Node(data);
       if(head==null)
       {
        head=newNode;
        return;
       }
       newNode.next=head;
       head=newNode;    
    }
    public  void addLast(String data) {
        Node newNode=new Node(data);
        if(head==null)
        {
            head=newNode;
            return;
        }
        Node CurrNode=head;
        while(CurrNode.next!=null)
        {
            CurrNode=CurrNode.next;
        }
        CurrNode.next=newNode;
    }

    //delete first and last
    public void deleteFirst() {
        if(head==null)
        {
            System.out.println("Node is empty");
            return ;
        }
        head=head.next;
    }
    public  void deleteLast() {
        if(head==null)
        {
            System.out.println("Node is empty");
            return;
        }
        if(head.next==null)
        {
            head=null;
            return;
        }
         Node secondlast=head;
         Node lastnode=head.next;//head.next==null -> lastnode==null
         while(lastnode.next!=null)//null.next will come error
         {
            lastnode=lastnode.next;
            secondlast=secondlast.next;
         }
         secondlast.next=null;
    }
    public  void printList () {
        if(head==null)
        {
            System.out.println("list is empty");
            return;
        }
         Node CurrNode =head;
         while(CurrNode!=null)//apne ahi CurrNode.next kariye  to last Node print nahi thay etla mate khali CurrNode lakhyu 6
         {
            System.out.print(CurrNode.data+"->");
            CurrNode=CurrNode.next;
         }
         System.out.println("NULL");
    }
    public static void main(String[] args) {
        LL list=new LL();
        list.addFirst("a");
        list.addFirst("is");
        list.printList();


        list.addLast("list");
        list.printList();

        list.addFirst("this");
        list.printList();

        list.deleteFirst(); 
        list.printList();

        list.deleteLast();
        list.printList();
    }
}
