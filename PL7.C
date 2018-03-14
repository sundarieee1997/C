#include<stdio.h>
#include<string.h>
int main()
{
char ch1[20],ch2[20],c[20],i;
printf("enter the char1:");
scanf("%s",&ch1);
printf("\n enter the char2:");
scanf("%s",ch2);
c[i]=ch1[i];
ch1[i]=ch2[i];
ch2[i]=c[i];
printf("\n after swapping,char1=%s",ch1);
printf("\n after swapping,char2=%s",ch2);
return(0);
}
