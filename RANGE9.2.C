#include<stdio.h>
int main()
{
	int num,min,max;
	printf("enter an integer:");
	scanf("%d",&num);
	printf("enter the min & max range\n");
	scanf("%d %d",&min,&max);
	if((num-min)*(num-max)<=0)
	{
		printf("%d is in th range of [%d , %d]",num,min,max);
	}
	else
	{
		printf("%d is not in the range of [%d , %d]",num,min,max);
	}
	return(0);
}
