#include<stdio.h>
void main()
{
    int b;
    printf("Enter a number\n");
    scanf("%d",&b);
    
    if(b%2==0)
    {
        printf("%d number is even\n",b%10);

    }
    else
    {
        printf("%d Number is odd\n",b%10);
        

    }

}


// #include<stdio.h>
// int main()
// {
//     int n,r;
//     printf("enter number");
//     scanf("%d",&n);
//     r=n%10;
//     if(r%2==0){
//         printf("%d number is even\n");
//     }
//     else{
//         printf("%d Number is odd\n");
//     }
//     return 0;
// }