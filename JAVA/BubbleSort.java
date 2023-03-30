// import java.util.Scanner;
// public class BubbleSort
// {
//     public static void main(String[] args) {
//         int j=0;
//         Scanner sc=new Scanner(System.in);
//         int arr[]={2,1,3,4,6,5,8,7};
//         for(int i=0; i<arr.length-1; i++)
//         {
//             for(j=0; j<arr.length-i-1; j++)
//             {
//                 if(arr[j]>arr[j+1])
//                 {
//                     int temp=arr[j];
//                     arr[j]=arr[j+1];
//                     arr[j+1]=temp;
//                 }
//             }
//         }
//         System.out.println(arr[j]);
//     }
// }

public class BubbleSort {  
    
    public static void main(String[] args) {  
                int arr[] ={3,60,35,2,45,320,5};  
                 
                bubbleSort(arr);//sorting array elements using bubble sort  
                 
                System.out.println("Array After Bubble Sort");  
                for(int i=0; i < arr.length; i++){  
                        System.out.print(arr[i] + " ");  
                }  
   
        }  
        static void bubbleSort(int[] arr) {  
            int j;
            int n = arr.length;  
            int temp = 0;  
            //  for(int i=0; i < n; i++){  
            //          for(int j=1; j < (n-i); j++){  
            //                   if(arr[j-1] > arr[j]){  
            //                          //swap elements  
            //                          temp = arr[j-1];  
            //                          arr[j-1] = arr[j];  
            //                          arr[j] = temp;  
            //                  }  
                              
            //          }  
            //  }  
            for(int i=0; i<n; i++)
            {
                for(j=0; i<n-i-1; j++)
                {
                    if(arr[j]>arr[j+1])
                    {
                        temp=arr[j];
                        arr[j]=arr[j+1];
                        arr[j+1]=temp;
                    }
                }
            }
        }  
}  