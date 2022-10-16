#include<stdio.h>

typedef long long int ll;

int main()
{
    int n;
    scanf("%d",&n);
    ll arr[n];
    ll sum=0;
    for(int i=0;i<n;i++)
    {
        scanf("%ld",&arr[i]);
        sum = sum + arr[i];
    }
    printf("%ld",sum);
    
}