#include<stdio.h>
void main()
{
    int a[]={1,6,4,3,8,9,3};
    int n=sizeof(a)/sizeof(a[0]);
    InsertionSort(a,n);
    printarray(a,n);
}
void InsertionSort(int a[],int n)
{
    int i,j,temp;
    for(int i=1; i<n; i++)
    {
        temp=a[i];//backup of first element that is unsorted card
        j=i-1;
        while(j>=0 && a[j]>temp)
        {
            a[j+1]=a[j];
            j=j-1;
        }
        a[j+1]=temp;
    }
}
void printarray(int a[],int n)
{
    for(int i=0; i<n; i++)
    {
        printf("%d\t",a[i]);
    }
}
