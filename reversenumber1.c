#include<stdio.h>
#include<conio.h>
void main()
{
    // int a=10,b=4,c=19,d=22;
    // printf("%d %d %d",++a,b++,a++*++b);
    int n,i,rev,sum=0;
    printf("Enter a number ");
    scanf("%d",&n);
    // while (n>0)
    // {
    //     rev=n%10;
        
    //     sum=sum*10+rev;
    //     n=n/10;
        
    // }
    for(; n>0; n=n/10)
    {
        rev=n%10;
        sum=(sum*10)+rev;
       // n=n/10;
    }
    printf("reverse number is %d ",sum);
}
    
// import java.util.*;
// public class reversenumber1
// {
//     public static void main(String[] args) {
//        int a[]={3,4,5,2,1};
//        int b[]={7,6,5,8,2};
//        int n1=a.length;
//        int n2=b.length;
//        int c[]=new int [n1+n2];
//        int i=0,j=0,k=0;
//        while(i<n1 && j<n2)
//        {
//            if(a[i]<b[j])
//                    {
//                        c[k]=a[i];
//                        i++;
//                        k++;
//                    }
//            else
//            {
//                c[k]=b[j];
//                j++;
//                k++;
//            }
//        }
//        while(i<n1)
//                {
//                   c[k]=a[i];
//                   i++;
//                   k++;
//                }
//        while(j<n2)
//        {
//            c[k]=b[j];
//            j++;
//            k++;
//        }
//        for( k=0; k<n1+n2; k++)
//        {
//            System.out.println(c[k]); 
//        }
//     }
    
// }