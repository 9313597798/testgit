public class Queues {
     int SIZE=5;
     int Queue []=new int[SIZE];
     int R=-1,F=-1;
    public static void main(String[] args) {
        Queues Q=new Queues();
        Q.enQueue(10);
        Q.enQueue(50);
        Q.enQueue(90);
        Q .display();
        System.out.println("--------------------------------------");
        Q.deQueue();
        Q.deQueue();
        Q.deQueue();

    }
    public void display()
    {
        for(int i=F; i<=R; i++)  
        {
            System.out.println(Queue[i]);
        }
    }

    public void enQueue(int data)
    {
        if(isfull()==true)
        {
            System.out.println("overflow");
        }
        else if(F==-1 && R==-1)
        {
            R++;
            Queue[R]=data;
            F++;
        }
        else
        {
            R++;
            Queue[R]=data;
        }
    }
    public void deQueue()
    {
        if(isEmpty()==true)
        {
            System.out.println("underflow");
        }
       else
       {
        int data=Queue[R];
        System.out.println("deleted data is"+data);
        F++;
       }
    }
    public boolean isfull()
    {
        if(F==0 && R==SIZE-1)
        {
            return true;
        }
        else{
            return false; 
        }
    }
    public boolean isEmpty()
    {
        if(R==-1 && F==-1)
        {
            return true;   
        }
        else{
            return false;
        }
    }

}
