#include<stdio.h>
int min()
{
int i,space;
char a[30];
printf("enter the string");
scanf("%s",&a);
for(i=0;a[i]!="\0";i++)
{
if(a[i]=='')
{
spaces++;
}
}
printf("the no of spaces in the string is %d\n",spaces);
return(0);
}
