#include<stdio.h>
#include<conio.h>
void main()
{
    int arr[10];
    for(int i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]%2==0)
        {
            printf(" %d Even\n",arr[i]);
        }
        else
        {
            printf(" %d Odd\n",arr[i]);
        }
    }


}