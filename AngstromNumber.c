#include<stdio.h>
#include<conio.h>
void main()
{
    int i,r,sum=0,n,temp;
    printf("Enter a Number ");
    scanf("%d",&n);
    temp=n;
    while (n>0)
    {
        r=n%10;
        sum=sum+(r*r*r);
        n=n/10;
    }
{
    if(temp==sum)
    {
        printf("  a angstrom number ");//153

    }
    else
    {
            printf(" not a angstrom number");

    }
}
    
}

// #include<stdio.h>
// #include<conio.h>
// void main()
// {
//     int n,i,sum=0;
//     scanf("%d",&n);
//     for(int i=1; i<=n; i++)
//     {
//         sum=sum+i;
//     }
//     printf
//     ("%d",sum);
// }