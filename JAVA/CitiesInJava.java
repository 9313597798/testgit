// import java.util.Scanner;
// public class CitiesInJava
// {
//     public static void main(String[] args) {
//         Scanner sc=new Scanner(System.in);
//         System.out.println("enter a number");
//         int n=sc.nextInt();
//         String cities []=new String [n];
//         for(int i=0 ; i<cities.length; i++)
//         {
//             cities[i]=sc.nextLine();
//         }
//         for(int i=0; i<cities.length; i++)
//         {
//             System.out.println(cities[i]);
//         }
//     }
// }



// import java.util.Scanner;
// public class CitiesInJava{
//     public static void main(String[] args) {
//         Scanner sc=new Scanner(System.in);
//         System.out.println("enter a element of an array");
//        int A[]={1,2,3,4,5,6};
//        for(int i=0; i<A.length; i++)
//        {
//         A[i]=sc.nextInt();
//        }
//        for(int i=0; i<A.length; i++ )
//        {
//         System.out.println(A[i]);
//        }
//     }
// }


import java.util.Scanner;
public class CitiesInJava{
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        //int A[]=new int[4];
        int A[]={1,2,3,4,5};
        A[0]=1;
        A[1]=2;
        A[2]=5;
        A[3]=4;
        A[4]=5;
        for(int i=0; i<5; i++)
        {
            System.out.println(A[i]);
        }

    }
}