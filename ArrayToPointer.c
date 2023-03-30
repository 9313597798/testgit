#include<stdio.h>
#include<conio.h>
void main()
{
    int mark[3],i;
    printf("enter a number");
    for(int i=0; i<3; i++)
    {
        scanf("%d",&mark[i]);
    }
    for(i=0; i<3; i++)
    {
        printf("address of %d element in array is %d\n",i,&mark[i]);
        printf("value of mark[i]=%d\n",*(mark+i));
    }
}
