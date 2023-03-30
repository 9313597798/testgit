#include<stdio.h>
void main()
{
    int n,sum=0;
    scanf("%d",&n);
    for(int i=1; i<=n; i++ )
    {
        
            sum=sum+((2*i)-1);
        

    }printf("%d",sum);
}