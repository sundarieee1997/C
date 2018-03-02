#include<stdio.h>
int main()
{
	int i,j;
	printf("enter the number");
	scanf("%d",&j);
	for(i=1;i<=j;i++)
	{
		if(j %i ==0)
		{
			printf("d",i);
		}
	}
	return(0);
}
