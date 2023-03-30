#include<stdio.h>
enum month {jan,feb,mar,apr,may,june,july,aug,sept,oct,nov,dec};
void main()
{
    enum month m;
    m=may;
    printf("%d\n",m);
    for(int i=jan; i<=dec; i++)
    {
        printf("%d\n",i);
    }
}