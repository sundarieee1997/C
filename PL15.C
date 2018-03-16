#include <stdio.h>
#include<string.h> 
int main() 
{
	char a[50],c;
	int i,j,count=1,max=1,l;
	printf("enter the string");
    gets(a);
    l=strlen(a);
	for(i=0;i<l;i++)
	{
		for(j=i+1;j<l;j++)
		if(a[i]==a[j])
		{
			count++;
			if(count>max)
			{
				max=count;
				c=a[i];
			}
		}
 
	}
	printf("\n%c",c);
	return 0;
}
