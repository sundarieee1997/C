#include <stdio.h>
#include<string.h>
int main()
{
	char ch1[100],ch2[100];
	printf("enter the first string");
	scanf("%s",&ch1);
	printf("\n enter the second string");
	scanf("%s",&ch2);
	if(ch1!=ch2)
	{
		printf("\n yes");
	}
	else
	{
		printf("no");
	}

return(0);
}
