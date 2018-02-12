#include<stdio.h>
int main()
{
	int num,tempnum,flag;
	printf("enter an integer no:");
	scanf("%d",&num);
	tempnum=num;
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
		printf("%d is an power of 2 ",num);
	}
	else
	{
		printf("%d is not a power of 2",num);
	}
	return(0);
}
