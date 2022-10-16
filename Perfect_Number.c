/*We define the Perfect Number is a positive integer that is equal to the sum of all its positive divisors except itself.*/

#include<stdio.h>

int main(){
    int a,i,sum=0;
    scanf("%d",&a);
    
    for (i=1;i<a;i++){
        if (a%i==0){
            sum +=i;    
        }
    }
    if (sum==a){
        printf("True");
    }
    else{
        printf("False");
    }
    
    return 0;
}