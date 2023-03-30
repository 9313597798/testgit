#include<stdio.h>
#include<conio.h>
void main()
{
    FILE *fptr;
    fptr=fopen("test.txt","w");//w means write in file
    fprintf(fptr,"%c\n",'m');// when we write 'a' instead of w that time given word repet 2 times  
    fprintf(fptr,"%c\n",'a');
    fprintf(fptr,"%c\n",'n');
    fprintf(fptr,"%c\n",'g');
    fprintf(fptr,"%c\n",'o');
    fclose(fptr);
}