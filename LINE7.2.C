#include<stdio.h>
int main()
{
file *fp;
char filename[100];
char ch;
int linecount;
linecount=0;
printf("enter the string:");
gets(filename);
fp=fopen(filename,"r");
if(fp)
while((ch==getc(fp))!=EOF)
{
if(ch=='\n')
{
++linecount;
}
if(charcount>0)
{
++linecount;
}
}
else
{
printf("faied is occur");
}
return(0);
