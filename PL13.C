#include <stdio.h>
int main()
{
	int a,n;
	int c,b,sum=0;
	printf("enter the numbers");
	scanf("%d",&n);
	while(n>0)
	{
		a=n%10;
		c=b*b;
		sum=sum+c;
		a=a/10;
	}
	printf("%d",sum);
	return 0;
}
