#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    int k=0,i;
    printf("enter the roman ");
    scanf("%c",&a);
    for(i=0;i<a[i];i++)
{
	if(a[i] == 'i')
	{
	k=k+1;
}
	else if( a[i] == 'v') 
{
	k=k+5;
}
	else if( a[i] == 'x')
{
		k=k+10;	
	}
} 
  for(i=0;i<a[i];i++)
{
	if(a[i]=='i'&&(a[i+1]=='v'||a[i+1]=='x'))
	{
	k=k-2;
	}	   
	printf("%d\n",k);
}
return(0);
}
