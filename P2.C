#include<stdio.h>
int main()
{
	int a,tempnum,flag;
	printf("enter an integer no:");
	scanf("%d",&a);
	tempnum=a;
	flag=0;
	while(tempnum!=1)
	{
		if(tempnum%2!=0)
		{
			flag=1;
			break;
		}
		tempnum=tempnum/2;
	}
	if(flag==0)
	{
		printf("%d is an power of 2 ",a);
	}
	else
	{
		printf("%d is not a power of 2",a);
	}
	return(0);
}
