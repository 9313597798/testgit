#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    char name[30],alpha;
    int i=0,status;
    printf("enter a  name \n");
    scanf("%s",&name);
    printf("enter  a alpha \n");
    scanf(" %c",&alpha);
    while (name[i]!='\0')
    {
        if(name[i]==alpha)
        {
            printf("character  present at index %d",i);
            status=1;
        }
        i++;
        
    }
    
    
    if(status==0)
    {
        printf("no character present in string");

    }
}
    
