#include<stdio.h>

int main(){
    
    int n,i,temp,sum,facto,rem;
    scanf("%d",&n);
    
    temp = n;
    sum = 0 ;
    while(temp>0){
        rem = temp%10;
        facto = 1;
        temp/=10;
        for(i=1;i<=rem;i++){
            facto *= i;
        }
        sum+=facto;
    }
    if (sum==n){
        printf("The number %d is a strong number",n);
    }
    else{
        printf("The number %d is not a strong number",n);
    }
    
    return 0;
}