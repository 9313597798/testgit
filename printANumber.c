#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i;
    printf("Entre a Number\n");
    scanf("%d",&n);
    //using for loop
    // for(i=0; i<=n; i++)
    // {
        
    //     printf("%d,",i);
        
        
    // }

    //using while loop
     i=0;
    // while(i<=n)
    // {
        
    //     printf("%d\n",i);
    //     i++;
    // }
    do
    {
     printf("%d\n",i);
     i++;
    } while (i<=n);
    
    

}