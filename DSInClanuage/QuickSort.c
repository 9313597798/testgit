#include<stdio.h>
#include<conio.h>
void main()
{
    int n;
    printf("enter a no. of element");
    scanf("%d",&n);
    int a[n];
    printf("enter a element in array");
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("sorted array is: ");
    print(a,n);
}
void QuickSort(int a[],int low,int high)
{
    if(low<high)
    {
        int pi=partition(a,low,high);//return i will be here 
        QuickSort(a,low,pi-1);//recursion call
        QuickSort(a,pi+1,high);//recursion call
    }
}

int partition(int a[],int low,int high)//pivot=a[high]
{
    int pivot=a[high];
    int i=low-1;
    for(int j=low; j<high; j++)
    {
        if(a[j]<pivot)
        {
            int temp=a[j];
            a[j]=a[i];
            a[i]=temp;
        }
    }
    i++;
    int temp=a[i];
    a[i]=a[high];
    a[high]=temp;
    return i;
}
void print(int a[],int n)
{
    for(int i=0; i<n; i++)
    {
        printf("%d\t",a[i]);
    }
}