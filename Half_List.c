#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int i;
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=n-1;i>=n/2;i--)
    {
        printf("%d ",arr[i]);
    }
    for(i=0;i<n/2;i++)
    {
        printf("%d ",arr[i]);
    }
}