#include<stdio.h>
#include<conio.h>
void main()
{
    int arr[10],sum=0;
    
    float avg;
    for(int i=0; i<10; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0; i<10; i++)
    {
        sum=sum+arr[i];
        //avg=sum/10;

    }
     avg=(float)sum/10;
    int max=arr[0];
    for(int i=0; i<10; i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    printf("%d %f %d",sum,avg,max);
    
}