#include<stdio.h>
#include<conio.h>
void main()
{
    int n,sum=0,i;
    int *ptr;
   for(int i=0; i<n; i++); 
   {
    scanf("%d",(ptr+i));
   }
   for(int i=0; i<n; i++)
   {
    sum+=*(ptr+i);
   }
   for(int i=0; i<n; i++)
   {
    printf("%d",sum);
   }
}