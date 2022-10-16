/*Given a non-empty array of integers, every element appears twice except for one.
Find that single one.
You must implement a solution with a linear runtime complexity and use only constant extra space.*/

#include<stdio.h>

int main(){
	// variable declaration
	int n,i,j,count;
	
	// user input statement
	scanf("%d",&n);
	
	int num[n]; // array declaration 
	
	// scanning elements of array
	for (i=0;i<n;i++){
        scanf("%d",&num[i]);
    }

	// logic for solving the code
	/* first loop will assign one element  per iteration and second loop will compare it other elements of the array if duplicate element was found 
	then it will increse the count value by 1 . After exiting second loop there is a conditional statement which will check the count value 
	if the count value is less than 2 i.e 1 obviously then it will print the Ith element of num array else it will  continue the untill the an unique number is found*/
	for (i=0;i<n;i++){
		count=0;
        for (j=0;j<=n;j++){
            if (num[i]==num[j]){
                count+=1;
            }
            
        }
        if (count<2){
            printf("%d",num[i]);
            break;
        }
    }
	return 0;
}