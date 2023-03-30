#include<stdio.h>
#include<conio.h>
void main()
{
    int n,key;
    printf("enter a number of size of an arr\n");
    scanf("%d",&n);
    
    int a[n];
    printf("enter a element in an array\n");
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter a key\n");
    scanf("%d",&key);
   LS(a,n,key);                         
}
void LS(int a[],int n,int key)
{
    int found=0;
    for(int i=0; i<n; i++)
    {
        if(a[i]==key)
        {
            printf("key is found at %d\n",i);
            found=1;
            //break;
        }
    }
    if(found==0)
        {
            printf("key is not found");
        
        }
}

