// #include<stdio.h>
// #include<conio.h>
// void main()
// {
//     int a[]={1,8,2,7,4,9,10};
//     int n=7;
//     BubbleSort(n,a);
//     for(int i=0; i<n; i++)
//     {
//         printf("%d ",a[i]);
//     }
// }   
// void BubbleSort(int n,int a[])
// {
//     for(int i=0; i<n; i++)//index
//     {
//         for(int j=0; j<n-1; j++)//for(int j=0; j<n-1-i; j++)
//         {
//             if(a[j]>a[j+1])
//             {
//                 int temp=a[j];
//                 a[j]=a[j+1];
//                 a[j+1]=temp;
//             }
//         }
//     }
// }

#include<stdio.h>
#include<conio.h>
void main()
{   
    int n;
    int arr[n];
    printf("enter a no. of element in array\n");
    scanf("%d",&n);
    printf("enter a element in an array\n");
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    BubbleSort(arr,n);
    printf("final array is\n");
    for(int i=0; i<n; i++)
    {
        printf("%d\n",arr[i]);
    }
}
int BubbleSort(int arr[],int n)
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n-1; j++)
        {
            if(arr[j]>arr[j+1]) 
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}