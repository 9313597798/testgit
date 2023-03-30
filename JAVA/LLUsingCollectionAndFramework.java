import java.rmi.server.SocketSecurityException;
import java.util.*;
public class LLUsingCollectionAndFramework {
    public static void main(String[] args) {
        LinkedList<String> list=new LinkedList<String>();
        // add
         list.addFirst("a");
         list.addFirst("is");
         System.out.println(list);
         list.addFirst("this");
         list.add("list");//list.addLast("list");
        System.out.println(list);

        //remove
         list.removeFirst();
         System.out.println(list);
         list.remove(1);
         System.out.println(list);
         System.out.println(list.size());

        // for print list
         for(int i=0; i<list.size(); i++)
         {
            System.out.print(list.get(i)+"->");
         }
         
    }
}
