#include<stdio.h>
//#include<conio.h>
void main()
{
    float base,aultitude;
    float area;
    printf("Enter a base of Triangle");

    scanf("%f",&base);
    printf("Enter a aultitude of Triangle");
    scanf("%f", &aultitude);
    area=(base*aultitude)/2;
    
    printf("The Area Of Trinagle Is : %f",area);
    

}