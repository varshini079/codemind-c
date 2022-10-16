#include<stdio.h>

int main(){
    int x,i,a=0,b=1,sum=0;  // variable declaration
    scanf("%d",&x); // user input
    // loop for printing fibonacci
    for (i=1;i<=x;i++){
        printf("%d ",sum);
        a=b;
        b=sum;
        sum = a+b;
    }
    return 0;
}