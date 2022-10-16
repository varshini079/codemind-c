#include<stdio.h>

int main()
{
    int n,i,j;
    scanf("%d",&n);
    int arr[n][n];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    int d1=0,d2=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if (i==j)d1=d1+arr[i][j];
            if (i+j == n-1)d2 = d2+arr[i][j];
        }
    }
    printf("Principal Diagonal:%d
",d1);
    printf("Secondary Diagonal:%d",d2);
}