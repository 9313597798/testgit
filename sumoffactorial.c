// #include<stdio.h>
// #include<conio.h>
// int facto(int n){
//     int ans=1;
//     for(int i=1;i<=n;i++){
//         ans*=i;
//     }
//     return ans;
// }
// void main()
// {
//     int n;
//     float sum=0;
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         sum+=(float)1/facto(i);
//     }
//     printf("%f",sum);

// }

#include<stdio.h>
#include<conio.h>
int facto(int n);
void main()
{
    int n;
    float sum=0;
    printf("enter a number");
    
    for(int i=0; i<=n; i++)
    {
      sum=sum+(1/facto(i));  
    }

}
int  facto(int n)
{
    int fact=1;
    for(int i=0; i<=n; i++)
    {
        fact=fact*i;
    }
    return fact;
}