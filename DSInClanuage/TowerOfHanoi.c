// #include<stdio.h>
// #include<conio.h>
// #include<stdbool.h>

// void main()
// {
// int n;
// char a='A';
// char b='B';
// char c='C';
// printf("enter a number of disks");
// scanf("%d",&n);
// TOH(n,a,b,c);
// }

// void TOH(int n,int  a,int  b, int c)
// {
//     if(n==1)
//     {
//         printf("move disk %d from %c to %c\n",n,a,c);
//     }
//     else
//     {
//         TOH(n-1,a,c,b);
//         printf("move disk %d from %c to %c\n",n,a,c);
//         TOH(n-1,b,a,c);
//     }
// }

#include<stdio.h>
#include<conio.h>
void main()
{
    int n;
    char a='A';
    char b='B';
    char c='C';
    printf("enter a number of disk\n");
    scanf("%d",&n);
    TOH(n,a,b,c);

}
int TOH(int n,int a,int b,int c)
{
    if(n==1)
    {
        printf("move a disk %d from %c to %c\n",n,a,c);
    }
    else
    {
        TOH(n-1,a,c,b);
        printf("move disk %d from %c to %c\n",n,a,c);
        TOH(n-1,b,a,c);
    }
}