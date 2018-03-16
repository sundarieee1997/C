#include <stdio.h>
#include<string.h> 
int main() 
{
	char b[50],d;
	int i,j,count=1,max=1,l;
	printf("enter the string");
    gets(b);
    l=strlen(b);
	for(i=0;i<l;i++)
	{
		for(j=i+1;j<l;j++)
		if(b[i]==b[j])
		{
			count++;
			if(count>max)
			{
				max=count;
				d=b[i];
			}
		}
 
	}
	printf("\n%c",d);
	return 0;
}
