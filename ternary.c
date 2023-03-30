#include<stdio.h>
#include<conio.h>
void main()
{
    int m,n,r;
    printf("Enter a two Number\n");
    scanf("%d %d",&m,&n);
    // (m>n) ? printf("m is largest") : ("n is largest");
    r=(m>n) ? m:n ;
   printf("largest Number is%d\n",r);
    r=(m<n) ? m:n ;
    printf("Smallest Number is%d\n",r);


}