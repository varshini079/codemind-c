#include<stdio.h>

int prime(int n)
{
    if (n==1)
    {
        return 0;
    }
    int i;
    for (i=2;i<n/2;i++)
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
    int t,i,n,after,before;
    scanf("%d",&t);
    for (i=0;i<t;i++)
    {
        scanf("%d",&n);
        after = n;
        before = n;
        while (1)
        {
            if (prime(after)==1)
            {
                break;
            }
            after+=1;
        }
        while (1)
        {
            if (prime(before)==1)
            {
                break;
            }
            before-=1;
        }
        int da = after-n,db = n-before;
        if (da==db)
        {
            printf("%d
",before);
        }
        else if (da>db)
        {
            printf("%d
",before);
        }
        else
        {
            printf("%d
",after);
        }
        
    }
    return 0;
}