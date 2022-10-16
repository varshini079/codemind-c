#include<stdio.h>

int main()
{
    
    int n,i,j;
    scanf("%d",&n);
    int a=0,b=1;
    if (n==0 || n==1){
        printf("True");
    }
    else
    {
        int flag=0;
        for (i=0;i<n/2;i++)
        {
            int temp = a+b;
            if((temp)==n)
            {
                flag=1;
                printf("True");
                break;
            }
            a = b;
            b= temp;
            
        }
        if (flag!=1)
        {
            printf("False");
        }
    }
    
    return 0;
}