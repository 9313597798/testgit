#include<stdio.h>
//#include<conio.h>
void main()
{
    int x,y;
    printf("Enter a NUmber X and Y\n");

    scanf("%d %d",&x,&y);
    //printf("before exchange a number x=%d and y=%d\n");
    // x=(x+y);
    // y=(x-y);
    // x=(x-y);

    x=x-y;
    y=y+x;
    x=y-x;
    
    printf("The swaping number  %d %d\n",x,y);
    //printf("The swaping number  x=%d and y=%d is ",x,y);

}