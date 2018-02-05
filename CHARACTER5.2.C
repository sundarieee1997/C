#include<stdio.h>
int main()
{
int count_char=0;
char str[20];
printf("enter string:");
gets(str);
for(i=0;str[i]=!NULL;i++)
{
count_char++;
}
printf("\n number of characters in string:%d",count_char);
return(0);
}
