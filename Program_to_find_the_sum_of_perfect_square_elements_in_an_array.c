#include<stdio.h>

int pfsq(int n)
{
    for (int i=1;i<=n;i++)
    {
        if(i*i==n)return 1;
    }
    return 0;
}

int main()
{
    int n,i,j;
    scanf("%d",&n);
    int arr[n];
    for( i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        // printf("%d ",arr[i]);
    }
    // printf("");
    int sum=0;
    for( i=0;i<n;i++)
    {
        if(pfsq(arr[i])){
            sum = sum + arr[i];
        }
    }
    printf("%d",sum);
}