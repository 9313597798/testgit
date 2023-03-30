#include<stdio.h>
void main()
{
    int a[]={1,9,3,7,6,4,2};
    int n=sizeof(a)/sizeof(a[0]);
    SelectionSort(a,n);
    printArray(a,n);
}
void SelectionSort(int a[],int n)
{
    int min,temp;
    for(int i=0; i<n-1; i++)
    {
        min=i;
        for(int j=i+1; j<n; j++)
        {
            if(a[j]<a[min])
            {
                min=j;
            }
        }
            temp=a[i];
            a[i]=a[min];
            a[min]=temp;
    }
}
void printArray(int a[],int n)
{
    for(int i=0; i<n; i++)
    {
        printf("%d\t",a[i]);
    }
}

