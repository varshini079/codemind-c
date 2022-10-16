#include <stdio.h>
#include<math.h>
int main()
{
    int n,t,i,j,flag;
    scanf("%d",&t);
    
    for(i=1;i<=t;i++){
        scanf("%d",&n);
        for(j=1;j<=n;j++){
            if ((j*j)==n){
                flag=1;
                break;
            }
            else{
                flag=0;
            }
        }
        if (flag!=0){
            printf("True
");
        }
        else{
            printf("False
");
        }
    }

    return 0;
}