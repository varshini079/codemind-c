#include<stdio.h>

int main(){
    
    int n,i,j,k,n_k,n_j;
    scanf("%d",&n);
    n_k = n-1;
    n_j = 1;
    for (i=1;i<=n;i++){
        for(k=n_k;k>=i;k--){
            printf(" ");
        }
        for (j=0;j<n_j;j++){
            printf("%d",i);
        }
        n_j+=2;
        printf("
");
    }
    
    return 0 ;
}