#include<stdio.h>
int main()
{
	int a,i;
	printf("enter the number");
	scanf("%d",&a);
	for(i=1;i<=26;i++)
	{
		a++;
	}
	printf("the alphabet is:%c",a);
	
	return(0);
}
