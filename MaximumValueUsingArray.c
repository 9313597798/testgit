#include<stdio.h>
#include<conio.h>
void main()
{
    int a[10],arr,n;
   // scanf("%d",&n);
    for(int i=0; i<10; i++)
    {
        scanf("%d",&a[i]);
    }

    //int arr[]={1,2,3,4,5};
    //int min=arr[0];
     int maxi=a[0];
    for(int i=0;i<10;i++)
    {
        if(a[i]>maxi)
        {
            maxi=a[i];
        }
    }   
    
    printf("%d",maxi);
}
