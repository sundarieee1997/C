#include<stdio.h>
int main()
{
int i,j;
printf("enter the number");
scanf("%d",&i);
if(i!=0)
{
	j=i%10;
	printf("the reverse is:%d",j);
}
	return(0);
}
