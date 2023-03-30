// #include<stdio.h>
// #include<conio.h>

// void main()
// {
//     int a=20;
//     int *ptr=&a;
//     addone(ptr);
//     printf("%d",*ptr);
// }
// void addone(int *n)
// {
//     ++(*n);//(*n)++
// }

#include<stdio.h>
#include<conio.h>

void main()
{
    int a=20;
    int *ptr=&a;
    addone(ptr);
    printf("%d",*ptr);
    // printf("%d",*ptr);
}
void addone(int *a)
{
    ++a;//(*n)++
}