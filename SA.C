#include<stdio.h>
int main()
{
	int a,sum=0,i;
	printf("enter the input");
	scanf("%d",&a);
	for(i=0;i<=a;i++)
	{
		sum=sum+i;
		printf("th sum is:%d",sum);
	}
	return(0);
}
