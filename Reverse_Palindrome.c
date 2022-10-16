#include <stdio.h>

int main()
{
	int x,rev,temp;
	
	scanf("%d",&x);
	while(1){
		temp=x;
		rev=0;
		while(temp>0)
		{
			rev=rev*10 + temp%10;
			temp/=10;
		}
		
	
		x=x+rev;
		temp=x;
		rev=0;
		while(temp>0)
		{
			rev=rev*10 + temp%10;
			temp/=10;
		}
		if(x==rev)
		{
			printf("%d",rev);
			break;
		}
	}
	
	return 0;
}