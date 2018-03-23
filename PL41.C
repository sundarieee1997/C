#include<stdio.h>
int main()
{
	int count=0,n,s,j;
	printf("\nEnter the number : ");
	scanf("%d",&n);
	printf("\nEnter the s value : ");
	scanf("%d",&s);
	for(j=1;j<=s;j++)
	{
		if(j*j==n&&j==s)
		{
			count+=1;
		}
	}
	if(count==0)
	{
		printf("\n%d is not the power of %d.",s,n);
	}
	else
	{
		printf("\n%d is the power of %d.",s,n);
	}
	return 0;
}
