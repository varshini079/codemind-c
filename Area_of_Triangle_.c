#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,q;
    float s,ar;
    scanf("%f %f %f",&a,&b,&c);
    s=((a+b+c)/2);
    ar=sqrt((s)*(s-a)*(s-b)*(s-c));
    printf("%.2f",ar);
    return 0;
}