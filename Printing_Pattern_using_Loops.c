#include <stdio.h>

int main()
{
    int n,i,j,k,n_k,n_j,l;
    scanf("%d",&n);
    n_k = n;
    n_j = 1;
    // finding j limit
    for (i=1;i<n;i++){
        n_j +=2;
        
    }
    // first iteration 
    for (i=n;i>=1;i--){
        for(k=n_k;k>=i;k--){
            printf("%d ",k);
        }
        for (j=1;j<=n_j-2;j++){
            if (i==1){
                printf("%d ",i);
            }
            else{
                printf("%d ",i);
            }
        }
        n_j = n_j-2;
        for(l=i;l<=n_k;l++){
            if (l==1){
                continue;
            }
            else{
            printf("%d ",l);
                
            }
        }
        printf("
");
    }
    n_j=1;
    
    // second iteration
    for (i=1;i<=n;i++){
        for(k=n_k;k>=i;k--){
            if(i==1){
                continue;
            }
            else{
                printf("%d ",k);
            }
        }
        for (j=1;j<n_j-1;j++){
            printf("%d ",i);
        }
        n_j+=2;
        for(l=i;l<=n_k;l++){
            
            if (l==1){
                break;
            }
            else{
                printf("%d ",l);
            }
            
        }
        if (i==1){
            continue;
        }
        else{
            printf("
");
        }
    }


    return 0;
}