#include<stdio.h>

int main(){
    
    int n1,n2,i,fact;
    scanf("%d%d",&n1,&n2);
    
    if (n1>n2){
        for(i=1;i<=n2;i++){
            if(n1%i==0 && n2%i==0){
                fact = i;
            }
        }
        printf("%d",fact);
    }
    else{
        for(i=1;i<=n1;i++){
            if(n1%i==0 && n2%i==0){
                fact = i;
            }
        }
        printf("%d",fact);
    }
    
    return 0;
}