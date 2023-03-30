#include<stdio.h>
#include<conio.h>
void main()
{
    int n,sum=0,i;
    printf("Enter a number\n");
    scanf("%d",&n);
    for(int i=1; i<=n/2; i++)
    {
        
        
        if(n%i==0)
        {
            sum=sum+i;
        }
    }
    if(sum==n)
    {
        printf(" %d  a perfact number",n);

    }
    else
    {
        printf(" not a perfact number");
    }
    
}