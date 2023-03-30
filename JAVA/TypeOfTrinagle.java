import java.util.Scanner;
public class TypeOfTrinagle {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("enter a three side of triangle");
        int a=sc.nextInt();
        int b=sc.nextInt();
        int c=sc.nextInt();
        Triangle(a, b, c);
    }
    public static void Triangle(int a,int b,int c) {
        if(a==b && b==c)
        {
            System.out.println("equlilateral triangle");
        }
        else if(a==b || b==c)
        {
            System.out.println("isoceles triangle");
        }
        else
        {
            System.out.println("scalene triangle");
        }
    }
}
