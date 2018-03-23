#include<stdio.h>
int main()
{
	int n,tpnum,flag;
	printf("enter an integer no:");
	scanf("%d",&n);
	tpnum=n;
	flag=0;
	while(tpnum!=1)
	{
		if(tpnum%2!=0)
		{
			flag=1;
			break;
		}
		tpnum=tpnum/2;
	}
	if(flag==0)
	{
		printf("\n %d is an power of 2 ",n);
	}
	else
	{
		printf("\n %d is not a power of 2",n);
	}
	return(0);
}
