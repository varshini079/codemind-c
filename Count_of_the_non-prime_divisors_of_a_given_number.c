#include <stdio.h>
int main()
{
    int n,i,j,count=0,nprime=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            for(j=1;j<=i;j++)
            {
                if(i%j==0)
                count++;
            }
            if(count!=2)
            nprime++;
        }
        count=0;
    }
    printf("%d",nprime);
    return 0;
}