#include<stdio.h>
int main()
{
	int a,b,c,i,value,k,sum=0;
	printf("enter the number");
	scanf("%d %d %d",&a,&b,&c);
	for(i=0;i<a;i++)
	{
	value=c;
	sum+=value;
        value=value+b;
	}
        printf("sum:%d",sum);
	

	return(0);
}
