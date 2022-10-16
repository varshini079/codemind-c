#include<stdio.h>

int isprime(int n)
{
    int i,factor=0;
    for (i=1;i<=n;i++)
    {
        if (n%i==0)
        {
            factor++;
        }
    }
    if (factor==2){
        return 1;
    }
    return 0;
}

int main()
{
    
    int n,i,j;
    scanf("%d",&n);
    int flag=0;
    for(i=2;i<n;i++)
    {
        if (isprime(i))
        {
            for (j=2;j<n;j++)
            {
                if (isprime(j))
                {
                    if (i*j==n)
                    {
                        printf("%d %d",i,j);
                        flag=1;
                        break;
                    }
                }
            }
            
        }
        if (flag==1)
            {
                break;
            }
        
    }
    if (flag==0)
        {
            printf("-1");
        }
    
    return 0;
}