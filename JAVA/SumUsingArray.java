import java.util.*;
public class SumUsingArray {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("enter a size of an array");
        int size=sc.nextInt();
        int arr[]=new int[size];
        System.out.println("enter a element of array");
        for(int i=0; i<arr.length; i++)
        {
            arr[i]=sc.nextInt();
        }
        int sum=0;
        for(int i=0; i<arr.length; i++)
        {
          sum=sum+arr[i];
        }
        System.out.println("sum is "+sum);
        System.out.println("avg is"+(float)sum/size);
    }
}
