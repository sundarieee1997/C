#include<stdio.h>
int main()
{
	int i,j,k;
	printf("enter the two numbers");
	scanf("%d %d",&i,&j);
	k=i*j;
	printf("product:",k);
	if(k/=4)
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
	return(0);
}
