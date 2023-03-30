#include<stdio.h>
#include<conio.h>
void main()
{
 int i,marks[7],n;
 //const int n;
 printf("Enter a  number");
 scanf("%d",&n);
 //int  marks [n];
 for(i=0; i<n; i++) 
 {
     printf("Enter a marks of subject %d\n",i+1);
     scanf("%d",&marks[i]);

 }  
 for(i=0; i<n; i++)
 {
     printf("marks[%d]=%d\n",i,marks[i]);

 }

}