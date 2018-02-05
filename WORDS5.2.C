#include<stdio.h>
int main()
{
int count_words=0,i;
char str[20];
printf("enter string:");
gets(str);
if(str[i]=='')
{
count_words++;
}
printf("\n number of words in string:%d",count_words+1);
return(0);
}
