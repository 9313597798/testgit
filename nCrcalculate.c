#include<stdio.h>
#include<conio.h>
int facto(int);
void main()
{
    int n,r,c,nCr;
    printf("Enter a number n and r\n");
    scanf("%d %d",&n,&r);
    nCr=facto(n)/(facto(r)*facto(n-r));
    
    printf("the value of %dC%d = %d\n",n,r,nCr);

}
int facto(int n)
{
    int i,facto=1,r,nCr;
    for( i=1; i<=n; i++)
    {
        facto=facto*i;
    }

    return facto;
    //printf("the value of %dC%d = %d\n",n,r,nCr);
}