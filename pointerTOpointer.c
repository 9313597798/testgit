#include<Stdio.h>
#include<conio.h>
void main()
{
    int i;
    printf("enter a number");
    scanf("%d",&i);
    //int i=5;
    int *ptr=&i;
    int **pptr=&ptr;
    printf("%d",**pptr);
    //printf("\n%d\n %d\n %d\n %d\n %d\n",**pptr,pptr,*ptr,ptr,&i);
}