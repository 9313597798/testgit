// #include <stdio.h>
// int main()
// {
//     int i, j, end, isPrime, sum=0;
//     /* Input upper limit from user */
//     printf("Find sum of all prime between 1 to : ");
//     scanf("%d", &end);
//     /* Find all prime numbers between 1 to end */
//     for(i=2; i<=end; i++)
//     {
//         /* Check if the current number i is Prime or not */
//         isPrime = 1;
//         for(j=2; j<=i/2 ;j++)
//         {
//             if(i%j==0)
//             {
//                 /* 'i' is not prime */
//                 isPrime = 0;
//                 break;
//             }
//         }
//          /*
//          * If 'i' is Prime then add to sum
//          */
//         if(isPrime==1)
//         {
//             sum +=i*i ;
//         }
//     }
//     printf("Sum of all prime numbers between 1 to %d = %d", end, sum);
//     return 0;
// }

// #include <stdio.h>
// #include<conio.h>

// void main()
// {
//     int n;
//     printf("enter a number");
//     scanf("%d", &n);
//     printf("%d", isPrime(n));
//     return;
// }
// int isPrime(int n)
// {
//     int sum = 0,check=1;
//     for (int i = 2; i <= n; i++)
//     {
//         for (int j = 2; j <=i / 2; j++)
//         {
//             if (i % j == 0)
//             {
//                 check = 0;
//                 break;
//             }
//         }
//         if (check == 1)//prime number
//             {
//                 sum = sum + i*i;//square(i);
//             }
//         else 
//         {
//             check = 1;
//         }
//     }
//     return sum;
// }
// // int square(int x) {
// //     return x*x;
// // }

#include<stdio.h>
#include<conio.h>
void main()
{
    int n;
    printf("enter a number");
    scanf("%d",&n);
    printf("%d",isPrime(n));
}
int isPrime(int n)
{
    int check=1,sum=0;
        for (int i=2; i<=n; i++)
        {
            for(int j=2; j<=i/2; j++)
            {
                if(i%j==0)
                {
                    check=0;
                    break;
                }
            }
            if(check==1)
            {
                sum=sum+i*i;
            }
            else
            {
                check=1;
            }
        }
        return sum;
}                                                                                                                                                                   