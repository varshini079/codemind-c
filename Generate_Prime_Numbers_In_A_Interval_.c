#include<stdio.h>

int main(){
    
    int l,r,i,j,factor;
    
    scanf("%d%d",&l,&r);
    
    if (l>=1 && l<=10000 && r>=1 && r<=10000){
        for(i=l;i<=r;i++){
            factor=0;
            for(j=1;j<=i;j++){
                if (i%j==0){
                    factor++;
                }
            }
            if (factor==2){
                printf("%d
",i);
            }
        }
    }
    
    
    return 0;
}