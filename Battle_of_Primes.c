#include<stdio.h>
#include<math.h>
int prime(int n)
{
    int i;
    if (n==0 || n==1)
    {
        return 0;
    }
    for(i=2;i<sqrt(n) + 1;i++)
    {
        if (n%i==0){
            return 0;
        }
    }
    return 1;
}

int main()
{
    int a,b,i=1;
    scanf("%d%d",&a,&b);
    while (1){
        if (prime(a+b+i))
        {
            break;
        }
        i++;
    }
    printf("%d",i);
    return 0;
}