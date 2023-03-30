#include<stdio.h>
#include<conio.h>
void main()
{
    int i,n;
    int flag=0;
    printf("Enter a Number\n");
    scanf("%d",&n);
    for(i=2; i<n; i++)
    {
        if(n%i==0)
        {
            printf("This Number note prime");
            flag++;
          break;
        }

    }
    if(flag==0)
    {
        printf("Prime");
    }
    
}