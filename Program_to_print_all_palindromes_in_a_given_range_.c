#include<stdio.h>

int main(){
    
    int l,r,i,j,temp,reverse;
    
    scanf("%d%d",&l,&r);
    
    for(i=l;i<=r;i++){
        temp = i;
        reverse =0;
        while(temp>0){
            reverse = reverse*10 + temp%10;
            temp/=10;
        }
        if(i==reverse){
            printf("%d ",reverse);
        }
    }
    
    
    return 0;
}