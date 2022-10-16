#include<stdio.h>

int main(){
    int t,i,j;
    scanf("%d
",&t);
    int arr[t];
    // taking the test cases
    for (i=0;i<t;i++){
        scanf("%d
",&arr[i]);
    }
    // checking the test case is palindrone or not
    // this loop will iterate the array
    for (i=0;i<t;i++){
        // this loop and variables will find the reverse of arr element
        int reverse = 0,n=arr[i];
        
        while(n>0){
            reverse = reverse*10 + n%10;
            n=n/10;
        }
        // following conditional will print true for palindrone number
        if (reverse==arr[i]){
            printf("True
");
        }else{
            printf("False
");
        }
    }
    return 0;
}