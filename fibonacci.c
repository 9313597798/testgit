#include<stdio.h>
#include<conio.h>
void main()
{
    int i,k,j,n;
    int a=0,b=1,c;
    printf("Enter a number");
    scanf("%d",&n);
    
    printf("%d",a);
    //printf("%d",b);
    
    for(int i=0; i<=n; i++)
    {
        c=a+b;
        a=b;
        b=c;
        printf("%d",c);
       
    }
    
}