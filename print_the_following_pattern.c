#include<stdio.h>

int main(){
    
    int n,i,j,last;
    scanf("%d",&n);
    last = 65+n;
    for(i=65;i<last;i++){
        for(j=0;j<n;j++){
            printf("%c ",i);
        }
        printf("
");
    }
    
    return 0;
}