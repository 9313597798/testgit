#include<stdio.h>
#include<conio.h>
int bs(int a[], int low, int high, int key);
void main()
{

    int n,key;
    printf("enter a size of arr");
    scanf("%d",&n);
    int a[n];
    printf("enter a element in array");
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter a key");
    scanf("%d",&key);


    int i = bs(a,0,n-1,key);
    if(i != -1)
    {
        printf("key is found at %d", i);
    }
    else
    {
        printf("key is not found");
    }
    return;
}
int bs(int a[],int low,int high,int key)
{
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(a[mid]==key)
        return mid;
        else if(a[mid]>key)
        high=mid-1;
       else if(a[mid]<key)
       low=mid+1;
    }
    return -1;
}

// #include<stdio.h>
// void main()
// {
//     int n,key;
//     printf("Enter a no. of element in an array\n");
//     scanf("%d",&n);
//     int arr[n];
//     printf("Enter a element for shorted array \n");
//     for(int i=0; i<n; i++)
//     {
//         scanf("%d",&arr[i]);
//     }
//     printf("enter a key\n");
//     scanf("%d",&key);
//     int i=BS(arr,0,n-1,key);
//     if( i==-1)
//     {
//         printf("key is not found");

//     }
//     else
//     {
//         printf("key is founded at %d\n",i);
//     }
// }
// int BS(int arr[],int low,int high,int key)
// {
//     while (low<=high)
//     {
//         int mid=(low+high)/2;
//         if(arr[mid]==key)
//         return mid;
//         else if(arr[mid]>key)
//         high=mid-1;
//         else
//         low=mid+1;
//     }
//     return -1;

// }