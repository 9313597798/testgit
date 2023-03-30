//diamond pattern
// #include<stdio.h>
// #include<conio.h>
// void main()
// {
//     int i,j,n;
//     printf("Enter a number of rows and column");
//     scanf("%d",&n);
//     for(i=1; i<=n; i++)
//     {
//         for(j=n-i; j>=0; j-- )
//         {
//             printf(" ");
//         }
//         for(j=1; j<=i; j++)
//         {
//             printf("$ ");
//         }
//         printf("\n");
//     }
//     for(i=n; i>=0; i--)
//     {
//         for(j=n-i; j>=i; j--)
//         {
//             printf(" ");
//         }
//         for(j=1; j<=i; j++)
//         {
//             printf("$ ");
//         }
//         printf("\n");
//     }
//     // for(i=n; i>=1; i--)
//     // {
//     //     for(j=n-1; j>=i; j--)
//     //     {
//     //         printf(" ");
//     //     }
//     //     for(j=1; j<=i; j++ )
//     //     {
//     //         printf("$ ");
//     //     }
//     //     printf("\n");
//     // }
// }



#include<stdio.h>
#include<conio.h>
void main()
{
    int i,n,j;
    printf("Enter a number");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n-i; j++)
        {
            printf(" ");
        }
        for(j=1; j<=(2*i)-1; j++)
        {
            printf("*");

            //printf("$");
        }
        printf("\n");
    }
    for(i=n; i>=1; i--)
    {
        for(j=1; j<=n-i; j++)
        {
            printf(" ");
        }
        for(j=1; j<=(2*i)-1; j++)
        {
            printf("$");
        }
        printf("\n");
    }
}
