#include<stdio.h>

int main(){
    
    int n,i,j,k;
    
    scanf("%d",&n);
    
    for(i=1;i<=n;i++){
        for(k=i;k<=n-1;k++){
            printf(" ");
        }
        for(j=1;j<=n;j++){
            if (i==1 || i==n){
                printf("*");
            }
            else if (j==1 || j==n){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("
");
    }
    
    return 0;
}