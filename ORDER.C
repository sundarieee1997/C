#include<stdio.h>
int main()
{
	long number=0;
	int temp_var=0;
	int i=1;
	printf("enter a number");
	scanf("%d",&number);
	while(number>=1)
	{
		temp_var=number%10;
		printf(" \n digit at %d place=> %d",i,temp_var);
		number=number/10;
		i++;
	}
	return(0);
}
