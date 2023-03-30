// #include<stdio.h>
// #include<conio.h>
// #include<string.h>
// int result;
// void main()
// {
//     int n,result;
//     printf("Enter a number");
//     scanf("%d",&n);
//     result=factorial(n);
//     printf(" factorial is %d",result);
// }
// int factorial(int n)
// {
//     if(n==1)
//     result=1;
//     else{
//         return n*factorial(n-1);

//     }
// }

#include<stdio.h>
#include<conio.h>
int result;
int  main()
{
    int n,result;
    printf("enter  a number");
    scanf("%d",&n);
    result=factorial(n);
    printf("factorial is %d",result);



}
int  factorial(int n)
{
    if(n==1)
    {
         result=1;

    }
    else{
        return n*factorial(n-1);

    }
}