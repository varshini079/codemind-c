#include<stdio.h>

int palin(int n)
{
    int temp =n;
    int rev = 0;
    while (temp>0)
    {
        rev = rev*10 + temp%10;
        temp/=10;
    }
    if (rev==n)
    {
        return 1;
    }
    else{
        return 0;
    }
}

int prime(int n)
{
    int i;
    if (n==0 || n==1)
    {
        return 0;
    }
    for (i=2;i<n/2 + 1;i++)
    {
        if (n%i==0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int n,after;
    scanf("%d",&n);
    after = n+1;
    while (1)
    {
        if (palin(after) && prime(after)){
            break;
        }
        after++;
    }
    printf("%d",after);
    return 0;
}