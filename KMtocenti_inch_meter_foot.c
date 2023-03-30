#include<stdio.h>
#include<conio.h>
void main()
{
    int kilometer,meter,centimeter,inch,feet;
    printf("Enter a distance in kilometer");
    scanf("%d",&kilometer);
    meter=kilometer*1000;


    
    centimeter=100000*kilometer;
    inch=kilometer*39370.0787;
    feet=kilometer*3280.8399;
    printf("%d\n%d\n%d\n%d\n",meter,centimeter,inch,feet);

}