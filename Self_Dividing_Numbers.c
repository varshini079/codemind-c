#include<stdio.h>

int main(){
    
    int a,b,i;
    scanf("%d%d",&a,&b);
    for (i=a;i<=b;i++)
    {
        int temp=i,a,flag=0;
        while(temp>0)
        {
            a = temp%10;
            if (a!=0)
            {
                if (i%a==0)
                {
                    flag=1;
                }
                else
                {
                    flag=0;
                    break;
                }
            }
            else{
                flag=0;
                break;
            }
            temp/=10;
        }
        if (flag!=0)
        {
            printf("%d ",i);
        }
    }
    
    return 0;
}