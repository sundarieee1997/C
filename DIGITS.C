#include<stdio.h>
int main()
{
long long n;
int count=0;
printf("enter an integer:");
scanf("%lld",&n);
while(n!=0)
{
	n/=10;
	++count;
}
printf("\n no of digits:%d",count);
return(0);
}
