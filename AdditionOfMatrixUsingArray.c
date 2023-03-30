#include<stdio.h>
#include<conio.h>
void main()
{
    int arr[2][2],arr2[2][2];
    int add[2][2];
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
        for(int j=0;j<2;j++){
            printf("%d ",arr2[i][j]);
        }
        printf("\n");
    }
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            add[i][j]=arr[i][j]+arr2[i][j];
            //sub[i][j]=arr[i][j]-arr2[i][j];
        }
    }
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            printf("%d ",add[i][j]);
        }
        printf("\n");
    }
    
}