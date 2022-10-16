#include<stdio.h>
#include<math.h>

int min(int a,int b)
{
    if (a<b)
    {
        return a;
    }
    return b;
}
int main()
{
    int n,i,after=0,before=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        if (pow(2,i)<=n)
        {
            before=pow(2,i);
        }
        else{
            after= pow(2,i);
            break;
        }
    }
    printf("%d",min(n-before,after-n));
    return 0;
}