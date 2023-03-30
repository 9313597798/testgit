import javax.sound.sampled.SourceDataLine;

public class StackArr {
    int Stack []=new int [3];
    int top=-1;
    public static void main(String[] args) {
        StackArr s1=new StackArr();
            s1.push(10);
            s1.push(20);
            s1.push(30);
            s1.pop();
            s1.pop();
            s1.pop();
    }
    public void push(int data)
    {
        if(top==Stack.length)
        {
            System.out.println("StackOverFlow");
        }
        else
        {
           top++;
            Stack[top]=data;
            System.out.println(Stack[top]);
        }
    }
   
    public void pop()
    {
        if(top==-1)
        {
            System.out.println("Stack is underFlow");
        }
        else
        {
            System.out.println("data is deleted"+Stack[top]);
            top--;
        }
    }
}
