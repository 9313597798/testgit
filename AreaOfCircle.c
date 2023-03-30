#include<stdio.h>
#include<math.h>
//#include<conio.h>
# define M_PI 3.14
void main()
{
    double r,area;
    
    scanf("%lf",&r);
    printf("Enter a radius of circle");
    area=(M_PI)*r*r;
    printf("The area of circle is%lf :",area);

}