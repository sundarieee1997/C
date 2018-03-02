#include <stdio.h>
int main()
{
	int a,b,c;
	printf("enter the two numbers");
	scanf("%d%d",&a,&b);
	c=a-b;
	printf("sub is",c);
	if(c %=0)
	{
		printf("even");
	}
	else
	{
		printf("odd");
	}
	return(0);
}
