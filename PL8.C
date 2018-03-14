#include <stdio.h>
int main()
{
	char S[100],S1[100];
	int i;
	printf("enter the string");
	scanf("%[^n]s %[n^]s1",S,S1);
	{
	if(S[i]>='a' && S[i]<='z' || S[i]>='A' && S[i]<='Z')
	{
		S[0]=S[0]-32;
	for(i=0;S[i]!='\0';i++)

	{
		
		if(S[i]==' ')
		{
			S[i+1]=S[i+1]-32;
		}
	}
	}
	printf("\n %s",S);
}
{
	if(S1[i]>='a' && S1[i]<='z' || S1[i]>='A' && S1[i]<='Z')
	{
		S1[0]=S1[0]-32;
	for(i=0;S1[i]!='\0';i++)

	{
		
		if(S1[i]==' ')
		{
			S1[i+1]=S1[i+1]-32;
		}
	}
	}
	printf("\n %s",S1);
}
return(0);
}
