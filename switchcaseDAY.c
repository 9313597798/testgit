// #include <stdio.h>
// #include <conio.h>
// void main()
// {
//     char day;
    
//     printf("enter a character");
//     scanf("%c",&day);
//     switch (day)
//     {
//     case 'a':
//     case 'i':
//     case 'o':
//     case 'u':
//     case 'e':
//     printf("vowel");
//         break;
    
//     default:
//     printf("consonants");
        
//     }
// }

#include<stdio.h>
#include<conio.h>
void main()
{
    int n;
    int a[10];
    printf("enter a number");
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a);
    }
    int max=a[0];
    for(int i=0; i<n; i++)
    {
        if(a[i]>max)
        {
               a[i]=max; 
        }
    }
    printf("Maximun number is %d",max);
}