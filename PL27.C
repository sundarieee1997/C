#include <stdio.h>
#include<string.h>
int main() 
{
	char a[10];
	int i,j,x;
	printf("enter the string");
	scanf("%s",a);
	for(i=0;a[i]!='\0';i++)
	{
	j=a[i];
		if(j>91)
		{
		x=j-32;
			a[i]=x;
		}
		if(j<97)
		{
		x=j+32;
			a[i]=x;
		}
	}
	printf("\n %s",a);
	return 0;
}
