#include<stdio.h>
#include<string.h>
void main()
{
    int i=0;
    char name []={"krishna"};
    while (i<=6)
    {
        printf("%c",name[i]);
        i++;
    }
    
}


// #include<stdio.h>
// void main()
// {
//     int *ptr;
//     int a=10;
//     ptr=&a;
//     printf("%d\n %d\n ",*ptr,a);
//     *ptr+=1;
//     printf("%d\n %d\n ",*ptr,a);
// }