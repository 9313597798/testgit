#include<stdio.h>
int main(){
    int n,i;
    scanf("%d",&n);
    for( i=2;i<n;i++){
        if(n%i==0){
            printf("Not prime");
            break; 
        }
    }
    if(n==i){
        printf("Prime");
    }
    // scanf("%d",&n);
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=n;j++){
    //         if(i==j || (i+j)% (n+1)==0){
    //             printf("*");
    //         }
    //         else{
    //             printf("  ");
    //         }
    //     }
    //     printf("\n");
    // }
    // return 0;
}