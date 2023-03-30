// import java.util.*;
// public class ArrayReverseUsingFunction {
   
//     public static void main(String[] args) {
//         int arr[]={1,2,3,4,5,6};
//         ReverseArray(arr);

//     }
//     public static void ReverseArray(int arr[]) {
//         int start=arr[0];
//         int end=arr[arr.length/2];
//         int temp;
//         for(int i=start; i<3; i++)
//         {
//             temp=arr[start];
//             arr[start]=arr[end];
//             arr[end]=temp;
//             start++;
//             end--;
//         }
//         System.out.println(arr);
//     }
// }


import java.util.*;
public class ArrayReverseUsingFunction
{
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("enter a size in array");
        int size=sc.nextInt();
        int arr[]=new int [size];
        System.out.println("enter a element in array");
        for(int i=0; i<size; i++)
        {
            arr[i]=sc.nextInt();
        }
       // int arr[]={1,2,3,4,5,6};
        revString(arr);
        System.out.println(Arrays.toString(arr));

    }
    public static void revString(int arr[]) {
        for(int i=0,j=arr.length-1; i<arr.length/2; i++,j--)
        {
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
}
