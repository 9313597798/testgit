#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,c;
    float avg;
    printf("Enter a 3 Number\n");
    scanf("%d %d %d",&a,&b,&c);
    avg=((float)a+(float)b+(float)c)/3;
    printf("avg of 3 number is %f:",avg);

}