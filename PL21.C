#include <stdio.h>
#include<string.h>
int main() 
{
	char str1[4],str2[4],str3[4];
	printf("enter the string1");
	scanf("%s",&str1);
	printf("\n enter the string2");
	scanf("%s",&str2);
	printf("\n enter the string3");
	scanf("%s",&str3);
	if((str1[0]=str2[0]=str3[0])||(str1[1]=str2[1]=str3[1]))
	{
	printf("\n yes");
	}
	else if((str1[0]=str1[1])&&(str2[0]=str2[1])&&(str3[0]=str3[1]))
	{
	printf("\n yes");
	}
	else
	{
	printf("\n no");
	}
	return 0;
}
