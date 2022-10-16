#include<stdio.h>

int max(int a,int b)
{
    if (a>b)
    {
        return a;
    }
    return b;
}

int lcm(int a,int b)
{
    int m = max(a,b);
    while (1){
        if (m%a==0 and m%b==0)
        {
            return m;
        }
        m = m + max(a,b);
    }
}

int main()
{
    int n,i;
    scanf("%d",&n);
    int arr[n];
    for (i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int g = arr[0];
    for (i=1;i<n;i++)
    {
        g = lcm(g,arr[i]);
    }
    printf("%d",g);
    
    return 0;
}