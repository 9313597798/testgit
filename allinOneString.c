#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    char str1[30],str2[30],str3[30]="krishna";
    int length;
    //  puts("Enter  a value for str1\n");
    //  gets(str1);
    printf("enter a name \n");
    scanf("%s",&str1);

    length=strlen(str1);
    printf(" %s %d\n",str1,length);
    strcpy(str2,str1);
    printf("conctent of str2 is :%s\n",str2);
    strcat(str1,str3);
    printf("now content of str1=%s\n",str1);
    strcmp(str1,str2);
    printf("compare is %s  %s camparision is %d\n",str1,str2,strcmp(str1,str2));
    int TU=strrev(str1);
    puts(TU);
}