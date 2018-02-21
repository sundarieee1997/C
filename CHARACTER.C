#include <stdio.h>
int main()
{
	int a;
	char b[120];
	printf("enter the string:");
	scanf("%s %d",&b,&a);
	if(a %2==0)
	{
		printf("\n yes");
	}
	else
	{
		printf("\n no");
	}
	return(0);
}
