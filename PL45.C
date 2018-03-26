#include<stdio.h>
#include<string.h>
int main()
{
int n,i,s,k;
char l[100];
printf("\n Enter the string : ");
scanf("%s",&l);
printf("\n Enter the number of rotatios : ");
scanf("%d",&n);
k=strlen(l);
s=n%k;
printf("\n The reversed string is : ");
for(i=s;l[i]!='\0';i++)
{
printf("%c",l[i]);
}
for(i=0;i<s;i++)
{
printf("%c",l[i]);
}
return(0);
}
