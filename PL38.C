#include<stdio.h>
int main()
{
	int k,l;
	printf("enter the number");
	scanf("%d",&l);
	for(k=2;k<=l;k++)
	{
		if(l %k ==0)
		{
			printf("\n %d",k);
		}
	}
	return(0);
}
