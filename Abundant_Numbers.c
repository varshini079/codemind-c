/*Write A Program to check a given number is Abundant Number or Not .

A number is abundant if sum of the proper factors of the number is greater than the number.
 

The first few abundant numbers are: 12, 18, 20, 24,..*/

#include<stdio.h>

int main(){
    
    int a,i,sum=0;
    scanf("%d",&a);
    
    for (i=1;i<a;i++){
        if (a%i==0){
            sum = sum + i; // adding proper factors
        }
    }
    // checking whether the number abundant or not
    if (sum>a){
        printf("True");
    }else{
        printf("False");
    }
    return 0;
}