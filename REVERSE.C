#include<stdio.h>
int main()
{
int a,b;
printf("enter the number");
scanf("%d",a);
while(a!=0)
{
		b=a%10;
if(b!=0)
{

	printf("the reverse is:%d",b);
}
}
	return(0);
}
