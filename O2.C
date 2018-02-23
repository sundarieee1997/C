#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter the two numbers");
	scanf("%d %d",&a,&b);
	c=a+b;
	if(c %2==1)
	{
		printf("\n odd");
	}
	else
	{
		printf("\n even");
	}
	return(0);
}
