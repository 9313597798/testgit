#include<stdio.h>
#include<conio.h>
void main()
{
    int d,n,sum=0,temp;
    printf("Enter a number");
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        d=n%10;
        sum=(sum*10)+d;
        n=n/10;

    }
    if(temp==sum)
    {
        printf("polindrome number");
    }
    else{
        printf("not a polindrome");
    }

}