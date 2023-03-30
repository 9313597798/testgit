#include<stdio.h>
#include<conio.h>
struct dataOfStudent
{
 
 int roll_no;
 char  name[30];
 char branch[30];
 float spi;
};
void main()
{
    struct dataOfStudent s[3];
   
    for(int i=0; i<3; i++)
    {
        printf("enter a name\n");
        scanf("%s",s[i].name);
        printf("enter a branch\n");
        scanf("%s",s[i].branch);
        printf("enter a spi\n");
        scanf("%f",&s[i].spi);
        printf("enter a roll no\n");
        scanf("%d",&s[i].roll_no);

    }
    for(int i=0; i<3; i++)
    {
        printf("name=%s\n   branch=%s\n spi=%f\n roll_no=%d\n",s[i].name,s[i].branch,s[i].spi,s[i].roll_no);
        printf("\n\n\n");
    }
}