#include<stdio.h>
void primenumber(int n);
void main()
{
    int a;
    printf("Enter a number1\n");
    scanf("%d",&a);
    //  printf("Enter a number2\n");
    //  scanf("%d",&b);

    primenumber(a);

}
void primenumber(int n)
{
    int i;
    for(i=2; i<n; i++)
    {
        if(n%i==0)
    {
        printf("not prime");
        break;
    }
    }

    if(n==i)
    {
        printf("prime");
    }
}
    
    
    

