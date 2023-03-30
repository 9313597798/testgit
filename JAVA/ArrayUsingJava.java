// import java.util.Scanner;
// public class ArrayUsingJava
// {
//     public static void main(String[] args) {
//         Scanner sc=new Scanner(System.in);
//         int marks[]=new int[3];
//         marks[0]=96;
//         marks[1]=78;
//         marks[2]=96;
//         for(int i=0; i<3; i++)
//         {
//             System.out.println(marks[i]);
//         }
//     }
// }

import java.util.Scanner;
public class ArrayUsingJava
{
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
       
        int A[]={1,2,3,4,5,6};
        for(int i=A.length-1; i<A[0]; i++)
        {
            System.out.println(A[i]);
        }
    }
}