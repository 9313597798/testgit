#include<stdio.h>
#include<conio.h>
void main()
{
    int arr[2][2];
    int m=0;
    int arr2[2][2];
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++){
            scanf("%d",&arr2[i][j]);
        }
    }
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            printf("%d ",arr2[i][j]);
        }
        printf("\n");
    }

    for(int i=0;i<2;i++)
    {   
        int temp=0;
        

        for(int j=0;j<2;j++)
        {
            temp=temp+(arr[m][j]*arr2[j][i]);
            
        }printf("%d ",temp);

    }
     printf("\n");
    for(int i=0;i<2;i++)
    {   
        int temp=0;
        

        for(int j=0;j<2;j++)
        {
            temp=temp+(arr[m+1][j]*arr2[j][i]);
            
        }printf("%d ",temp);

    }
}