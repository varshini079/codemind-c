//Write a Program to find the number of integers with exactly 9 divisors
#include<stdio.h>

int main(){
    
    //variable declaration
    int a,i,j,k,number_count=0;
    
    //input statment
    scanf("%d",&a);
    
    //second loop counts the factors count and firs loop counts the number count when the factor count is =9
    for (i=1;i<=a;i++){
        int factors_count=0;
        for (j=1;j<=i;j++){
            if (i%j==0){
                factors_count+=1;
            }
        }
        if (factors_count==9){
            printf("%d ",i);
            number_count+=1;
        }
    }
    printf("
Total=%d",number_count);
    
    return 0;
}