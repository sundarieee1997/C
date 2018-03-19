#include <stdio.h>
int main()
{
	int i,d,c,j;
	printf("enter the number");
	scanf("%d%d",&i,&d);
	for(j=2;j<=i;j++)
	{
		if(i%j==0  &&  d%j==0);
		{
			c=j;
		}
	}
	printf("\n the greatest number is:%d",c);
	return 0;
}
