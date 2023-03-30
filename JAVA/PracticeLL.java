//Make a Linked List & add the following elements to it : (1, 5, 7, 3 , 8, 2, 3). Search for the number 7 & display its index.

public class PracticeLL {
    Node head;
    int size=0;
     class Node{
        int data;
        Node next;
        Node (int data)
        {
            this.data=data;
            this.next=null;
        }
    }
    public void addFirst(int data)
    {
        Node newNode=new Node(data);
        if(head==null)
        {
            head=newNode;
            return;
        }
        newNode.next=head;
        head=newNode;
    }
    public boolean search(int val)
    {
        if(head==null)
        {
            return false;
        }
        size++;
        Node temp=head;
        while(temp!=null)
        {
            
            if(temp.data==val)
            {
                //System.out.println(temp.data+"at index"+size);
                return true;
            }
            temp=temp.next;
        }
            return false;
     }
    
    public void display()
    {
        if(head==null)
        {
            System.out.println("list is empty");
            return;
        }
        Node temp=head;
        while(temp!=null)
        {
            System.out.print(temp.data+"->");
            temp=temp.next;
        }
        System.out.println("null");
    }
    // add first
    public static void main(String[] args) {
        PracticeLL ll=new PracticeLL();
        ll.addFirst(3);
        ll.addFirst(2);
        ll.addFirst(8);
        ll.addFirst(3);
        ll.addFirst(7);
        ll.addFirst(5);
        ll.addFirst(1);
        if(ll.search(18))
        {
            System.out.println("element found");
        }
        else
        {
            System.out.println("element not found");
        }
        ll.display();
    }
}
