#include<stdio.h>
#include<conio.h>
void main()

{
    float   fahrenheit,celsius;
    printf("Enter a temp in celsius is :");
    scanf("%d",&celsius);
    fahrenheit=((9.0/5.0)*celsius)+32;
    //fahrenheit=(1.8*celsius)+32;

    printf("Enter a Number is: %f ",fahrenheit);

}
