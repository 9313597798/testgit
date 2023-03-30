#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    int i;
    char name;
    printf("enter a ch");
    scanf("%c",&name);
    if(name=='a' || name=='i'|| name=='o' || name=='u'  || name=='e')
    {
       printf("its a vowel");
    }
    else if(name=='A' || name=='I'|| name=='O' || name=='U'  || name=='E')
    {
        printf("its a vowel");

    }
    else{
        printf("not a vowel");
    }
}