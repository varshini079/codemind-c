#include<stdio.h>

int main(){
    
    int n,i,j,temp;
    scanf("%d",&n);
    
    temp = 1;
    for(i=n;i>=1;i--){
        for(j=n;j>=1;j--){
            if (i==j || j==temp){
                printf("%d ",i);
            }
            else{
                printf(" ");
            }
        }
        printf("
");
        temp++;
    }
}