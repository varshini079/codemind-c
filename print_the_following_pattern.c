#include<stdio.h>

int main(){
    
    int n,i,j;
    scanf("%d",&n);
    int temp = n-1;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if (i==j || j==temp){
                printf("x");
            }
            else{
                printf("0");
            }
        }
        temp-=1;
        printf("
");
    }
    
    return 0;
}