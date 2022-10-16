#include<stdio.h>

int rev ( int n)
{
    int reverse=0;
    while (n>0)
    {
        reverse = reverse*10 + n%10;
        n/=10;
    }
    return reverse;
}

int palin(int n)
{
    if (n==rev(n))
    {
        return 1;
    }
    else{
        return 0;
    }
}

int main()
{
    int n;
    scanf("%d",&n);
    int after = n+1;
    int before = n-1;
    
    while (after)
    {
        if (palin(after)){
            break;
        }
        after++;
    }
    // printf("%d ",after);
    while (before)
    {
        if (palin(before)){
            break;
        }
        before--;
    }
    int adif = after-n;
    int bdif = n-before;
    // printf("%d 
%d ",adif,bdif);
    
    if (adif==bdif)
    {
        printf("%d %d",before,after);
    }
    else if (adif>bdif)
    {
        printf("%d",before);
    }
    else{
        printf("%d",after);
    }
    
    return 0;
}