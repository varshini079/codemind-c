#include<stdio.h>

int main(){
    
    int n,i,j,cap_a,initial;
    scanf("%d",&n);
    cap_a =  65;
    initial = cap_a+n-1;
    for(i=initial;i>=cap_a;i--){
        for(j=i;j>=cap_a;j--){
            printf("%c ",i);
        }
        printf("
");
        
    }
    
    return 0;
}