#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,arr[3][3];
    printf("enter a element of array ");
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            //printf("Enter a Matrix\n");
            //printf("enter a element of array %d",i);
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            //arr[i][j]=arr[j][i];
            printf("%d ",arr[i][j]);
            
        }
        printf("\n");
    }
        printf("the transpose matrix is\n");
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            //arr[i][j]=arr[j][i];
            
            printf("%d ",arr[j][i]);
            
        }
        printf("\n");
    }
}