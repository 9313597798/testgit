#include<stdio.h>
void main()
{
    float sum=0;
    int n,i;
    scanf("%d",&n);
    for(i=1; i<=n; i++) 
    {
        sum=sum+(float)1/i;
    }
    printf("%f\n",sum);
}