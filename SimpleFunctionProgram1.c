#include<stdio.h>
#include<conio.h>
void namste(); //declaration
void bonjour();//declaration
void main()
{       
    char ch;
    printf("Enter a f for french and i for indian\n");
    scanf("%c",&ch);
    if(ch=='i')
    {
        namste();//function vcalling 
    }
    else{
        bonjour();//function calling
    }


}
void namste()
{
    printf("namste\n");//function defination
}
void bonjour()
{
    printf("bonjour\n");//function defination
}