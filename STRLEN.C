#include<stdio.h>
#include<string.h>
int main()

{
char ch[100],a[100],b[100];
int i,k;
printf("enter the string");
scanf("%s",ch);
k=strlen(ch);
for(i=0;i<k;i++)
{
	if(i%2==0)
	printf("\n %c",ch[i]);
	
}
return(0);
}
