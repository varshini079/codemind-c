#include <stdio.h>
#include<math.h>
int main()
{
    int n,i,flag;
    scanf("%d",&n);
    
    for(i=1;i<n;i++){
        if ((i*i)==n){
            flag =1;
            break;
        }
        else{
            flag=0;
        }
    }
    if (flag!=0){
        printf("True");
    }
    else{
        printf("False");
    }

    return 0;
}