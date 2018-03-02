#include<stdio.h>
int main()
{
	int a;
	int n,m;
	printf("enter the number");
	scanf("%d",&a);
	printf("enter two numbers");
	scanf("%d %d",&n,&m);
	if(n/m==a)
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
	return(0);
}
