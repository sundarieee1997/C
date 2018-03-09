#include<stdio.h>
int main()
{
	int b,i;
	printf("enter the number");
	scanf("%d",&b);
	for(i=1;i<=26;i++)
	{
		b++;
	}
	printf("the alphabet is:%c",b);
	
	return(0);
}
