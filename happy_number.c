#include<stdio.h>

int main()
{
    int n,temp;
    scanf("%d",&n);
    temp = n;
    while (1){
        int sum = 0;
        int dcount=0;
        while(temp>0)
        {
            sum+= (temp%10)*(temp%10);
            dcount++;
            temp/=10;
        }
        if (dcount==1)
        {
            if (sum==1)
            {
                printf("True");
                break;
            }
            else{
                printf("False");
                break;
            }
        }
        temp = sum;
        
    }
    
    return 0;
}