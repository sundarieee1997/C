#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter the two numbers");
	scanf("%d %d",&a,&b);
	c=a/b;
	printf("\n the division is:%d",c);
	c=a%b;
	printf("\n the modulo is:%d",c);
	return(0);
}
