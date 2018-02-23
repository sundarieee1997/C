#include<stdio.h>
int main()
{
char n[30];
int i,count=0;
printf("enter the string");
scanf("%s",&n);
for(i=0;n[i]!='\0';i++)
{
if(!(n[i]==(0||1)))
{
count++;
}
}
if(count==0)
{
printf("\n the number is binary");
}
else
{
printf("\n the number is not a binary");
}
return(0);
}
