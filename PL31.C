#include<stdio.h>
#include<string.h>
int main() 
{
char str[20];
int i;
int count1=0,count2=0;
printf("enter the string");
scanf("%s",str);
for(i=0;str[i]!='\0';i++)
{
if(str[i]=='(')
{
count1=count1+1;
}
else if(str[i]=='(')
{
count2=count2+1;
}
}
if(count1==count2)
{
printf("\n yes");
}
else
{
printf("\n no");
}	
return 0;
}
