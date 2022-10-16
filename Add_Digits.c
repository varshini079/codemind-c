#include<stdio.h>

int main()
{
    int n,i,temp;
    scanf("%d",&n);
    temp=n;
    while(1)
    {
        int sum=0,dcount=0,num=temp;
        while(temp>0){
            sum= sum + temp%10;
            dcount++;
            temp/=10;
        }
        if (dcount==1){
            printf("%d",num);
            break;
        }
        temp=sum;
        
        
    }
    
    return 0;
}