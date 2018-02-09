#include<stdio.h>
int stringcompare(char[],char[]);
int main()
{
	char a1[10],a2[10];
	int compare;
	printf("enter 1st string:");
	scanf("%s",&a1);
	printf("enter 2nd string:");
	scanf("%s",&a2);
	compare=stringcompare(a1,a2);
	if(compare==1)
	{
		printf("both the string are exactly same");
	}
	else
	{
		printf("both the strings are different");
	}
	return(0);
}
