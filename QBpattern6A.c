#include <stdio.h>
#include <conio.h>
void main()
{
    int n,k=1;
    printf("enter a number");
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            
            printf("%d",k);
            k++;
            
        }
        printf("\n");
    }
}

// #include<stdio.h>
// #include<conio.h>
// void main()
// {
//     int i,j,n,k=0;
//     printf("Enter a number of rows and column");
//     scanf("%d",&n);

//     for(i=0; i<=n; i++)
//     {
//         for(j=1; j<=i; j++)
//         {
//             k++;
//             printf("%d ",k);
//         }
//         printf("\n");
//     }
// }
