#include<stdio.h>
void main()
{
    // int n;
    // printf("enter a no. of element ");
    // scanf("%d",&n);
    // int a[n];
    int a[]={1,5,7,6,2,3,4};
    int n=(sizeof(a)/sizeof(a[0]));
    // printf("enter a element ");
    // for(int i=0; i<n; i++)
    // {
    //     scanf("%d",&a[i]);
    // }    
    mergesort(a,0,n-1);
    printArray(a,n);
}
void mergesort(int a[],int low,int high)//  this part will be doing the divide the array up to the don't remain single element
{
    int mid;
    if(low<high)
    {
        int mid=(low+high)/2;
        mergesort(a,low,mid);
        mergesort(a,mid+1,high);
        merge( a, low, mid , high);
        
    }
}

void merge(int a[],int low,int mid,int high)// this  part doing the recursiv call for sorting to the array
{
    int i=low,k=low,j=mid+1;
    int temp[50];
    //compare i & j, copy the smaller to Temp array
    while(i<=mid && j<=high)
    {
        if(a[i]<a[j])
        {
            temp[k++]=a[i++];
        }
        else
        {
        temp[k++]=a[j++];
        }
    }
    // if right sub-array get exhausted then copy remaining elements of left sub-array in Temp array
    while(i<=mid)
    {
        temp[k++]=a[i++];
    }
    // if left sub-array get exhausted then copy remaining elements of right sub-array in Temp array
    while(j<=high)
    {
        temp[k++]=a[j++];
    }
    // copy sorted array from temp to original array
    for(int i=low; i<=high; i++)
    {
        a[i]=temp[i];
    }
}

void printArray(int a[],int n)
{
    for(int i=0; i<n; i++)
    {
        printf("%d\t",a[i]);
    }
}