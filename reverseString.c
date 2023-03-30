// #include<stdio.h>
// #include<conio.h>
// #include<string.h>
// void main()
// {       
//     char s[10]="abcdef";
//     for(int i=0;i<=6/2;i++)
//     {
//         char temp=s[i];
//         s[i]=s[5-i];
//         s[5-i]=temp;
//     }
//     puts(s);
// }


#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    char  name[30];
    printf("Enter a name\n");
    scanf("%s",&name);
     int length=strlen(name);
     printf("%d\n",length);
     int tamp=length;
    for(int i=0; i<tamp/2; i++)
    {
        char S=name[i];
        name[i]=name[tamp-1-i];
        name[tamp-1-i]=S;
        
    }
    printf("%s\n",name);
    

}
