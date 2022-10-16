/*find out weather given number is palindrome or not

 palindrome:if given number and its reversed number are same then its a palindrome*/
#include<stdio.h>

int main(){
    
    // variables
    int a,temp,reverse,i;
    scanf("%d",&a);
    
    temp = a; // storing a 
    reverse =0; // initialzing
    
    // start of reversing
    while (temp>0){
        reverse = reverse*10 + temp%10; // reverse logic 
        temp/=10;
    }
    //checking whether the number is palindrome or not
    if (a==reverse){
        printf("True");
    }
    else{
        printf("False");
    }
}