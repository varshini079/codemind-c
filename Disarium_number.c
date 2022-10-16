/*write a logic to print weather given number is Disarium number or not

A number is said to be the Disarium number when the sum of its digit raised to the power of their respective positions becomes equal to the number itself.

*/

#include<stdio.h>
#include<math.h>
int main(){
    
    int temp,n,ds,reverse=0,sum=0,i=1;  //ds -- disarium number
    scanf("%d",&n);                     // user input for n 
    temp = n;                           // temp -- storage of n
    
    // first reversing the number
    while (temp>0){
        // logic for reversing the number
        reverse = reverse*10 + temp%10; 
        temp/=10;
    }
    
    while (reverse>0){
        // logic for 1**1+ 7**2 + 125 = 175
        sum = sum + pow(reverse%10,i); 
        reverse/=10;
        i++;
    }
    if (sum==n){
        printf("True");
    }
    else{
        printf("False");
    }
}