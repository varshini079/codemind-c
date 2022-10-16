#include<stdio.h>

int main(){
    
    // variables
    int arr[10],n,hcf,i,count;
    
    scanf("%d",&n);
    // inserting elements to arr
    
    for (i=0;i<n;i++){
        scanf("%d",&arr[i]);
        
    }
    //intializing i for while loop which will update hcf value if it is less than arr[i]
    
    i = 0 ; 
    // intializing hcf 
    
    hcf = arr[i];
    
    while(i<n){
        if (hcf<arr[i]){
            // updating hcf to arr[i]if it is less than arr[i]
            hcf = arr[i];
        }
        i++;
    }
    
    while(1){
        i = 0;
        count=0;
        while(i<n){
            if (arr[i]%hcf==0){
                count++;
            }
            i++;
        }
        if (count==n){
            break;
        }
        else{
            hcf--;
        }
    }
    
    printf("%d",hcf);
    return 0;
}