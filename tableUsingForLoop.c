#include<stdio.h>
#include<conio.h>
void main()
{
    int i,n;
    printf("Enter a Number\n");
    scanf("%d",&n);
    printf("Multipication table for %d is :\n",i);
    for(i=1; i<=10; i++)
    {
      printf("%d*%d=%d\n",n,i,(n*i));
    
    }
}