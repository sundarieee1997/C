#include<stdio.h>
int main()
{
int a,b,i;
printf("enter the number");
scanf("%d",&a);
for(i=0;i<a;i++)
{
	b+=i;
}
printf("the sum is:%d",b);

return(0);
}
