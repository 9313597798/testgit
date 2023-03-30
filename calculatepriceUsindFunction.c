#include<stdio.h>
#include<conio.h>
#include<math.h>
void calculateprice(float );
void main()
{
    float n;
    printf(" enter a price");
    scanf("%f",&n);

    calculateprice(n);
}
void calculateprice(float value)
{
    //float value=0;
    value=value+(value * 0.18);
    printf("%f",value);
}