// import java.util.Scanner;
// public class PrintMyName {
//     public static void PrintMyName(String name) {
//         System.out.println(name);
//         return;
//     }
//     public static void main(String[] args) {
//         Scanner sc=new Scanner (System.in);
//         System.out.println("enter a name");
//         String name=sc.nextLine();
//         PrintMyName(name);
//     }
// }



// public class PrintMyName {
//     String name;
//     int manu_date;
//     public String getname()
//     {
//         return name;
//     }
//     public int getmanu_date()
//     {
//         return manu_date;
//     }
//     public static void main(String[] args) {
//         PrintMyName c1=new PrintMyName();
//         PrintMyName c2=new PrintMyName();
//         c1.name="LEXUS";
//         c2.name="FERRARI";
//         c1.manu_date=20-12-2021;
//         c2.manu_date=9-9-2022;
//         System.out.println(c1.name);
//         System.out.println(c2.name);
//         System.out.println(c1.manu_date);
//         System.out.println(c2.manu_date);
//     }
// }



public class PrintMyName {
    public static int printsum(int i,int n,int sum) {
        if(i==n)
        {
        sum+=i;
        System.out.println(sum);
        return 0 ;
        }
       sum+=i;
       printsum(i+1,n,sum);
        return 0;
    }
    public static void main(String[] args) {
        printsum(1,5,0);
    }
}
