// import java.util.Scanner;
// public class SumOfNumberUsingFunction {
//         public static int  SumOfNumber(int a,int b) {
//             int sum=a+b;
//             return sum;
//         }
//         public static void main(String[] args) {
//             Scanner sc=new Scanner(System.in);
//             System.out.println("enter a 2 number");
//             int a=sc.nextInt();
//             int b=sc.nextInt();
//             int sum=SumOfNumber(a,b);
//             System.out.println(sum);

//         }
// }

import java.util.Scanner;
public class SumOfNumberUsingFunction{
    public static void main(String[] args) 
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("enter a number");
        int a=sc.nextInt();
        int b=sc.nextInt();
        SumOfNumber(a,b);
    }
    public static int SumOfNumber(int a,int b) 
    {
        int sum=a+b;
        System.out.println(sum);
        return sum;
    }
}
