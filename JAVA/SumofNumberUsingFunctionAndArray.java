import java.util.*;
public class SumofNumberUsingFunctionAndArray
{
    public static void main(String[] args) {
        int arr[]={1,2,3,4,5};
        sum(arr);
        
    }
    public static void sum(int arr[]) {
        int sum=0;
        for(int i=0; i<arr.length; i++)
        {
            sum+=arr[i];
        }
         System.out.println("sum is"+sum);
        System.out.println("avg is"+sum/arr.length);
    }
}