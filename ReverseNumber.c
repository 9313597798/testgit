#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i,m;
    int ans=0;
    printf("Enter a Number");
    scanf("%d",&n);
    
    // for(m=n; m>0; m/10)
    while(n>0)
    
    {
        
        int rev=n%10;
        ans=ans*10+rev;
        n=n/10;



    }
    printf("%d",ans);
}