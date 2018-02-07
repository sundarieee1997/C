#include<stdio.h>
#include<string.h>
void count(string str)
{
int number=0;
printf("enter the string":);
gets(str);
for(int i=0;i<str.length();i++)
{
if(str[i]>='0'&&str[i]<='9')
{
number++;
}
}
printf("number:",number);
return(0);
}
