#include <stdio.h>
#include<string.h> 
int main() 
{
char s[50],k;
int i,j,count=1,max=1,l;
printf("enter the string");
gets(s);
l=strlen(s);
for(i=0;i<l;i++)
{
for(j=i+1;j<l;j++)
if(s[i]==s[j])
{
count++;
if(count>max)
{
max=count;
k=s[i];
}
}
}
printf("\n %c",k);
return 0;
}
