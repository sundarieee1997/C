#include <stdio.h>
int main() 
{
	int k,temp,s,c=0;
	printf("\nEnter the number : ");
	scanf("%d",&k);
	printf("\nEnter the number to be checked : ");
	scanf("%d",&s);
	while(k!=0)
	{
		temp=k%10;
		if(temp==s)
		{
			c=c+1;
		}
		k=k/10;
	}
	printf("\n the number present %d times",c);
	return 0;
}
