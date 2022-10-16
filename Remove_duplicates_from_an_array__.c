#include<stdio.h>

int main()
{
    int n,i;
    scanf("%d",&n);
    int hsh[n+10];
    for(i=0;i<n;i++)
    {
        hsh[i]=0;
    }
    for(i=0;i<n;i++)
    {
        int a;
        scanf("%d",&a);
        if(hsh[a]==0)
        {
            printf("%d ",a);
            hsh[a]=1;
        }
    }
}