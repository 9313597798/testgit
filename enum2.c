#include<stdio.h>
enum month {jan=11,feb,mar,apr,may,june=19,july,aug,sept,oct,nov,dec};
void  main()
{
    enum month m;
    m=may;
    printf("%d\n",m);
    for(int i= jan; i<=dec; i++)
    {
        printf("%d\n",i);
    }
}