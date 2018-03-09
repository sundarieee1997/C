#include<stdio.h>
int main()
{
int a,b,i;
printf("enter the two numbers");
scanf("%d %d",&a,&b);
for(i=1;i<=b;i++)
{
	++b;
}
printf("the repetition is:%d",b);

return(0);
}
