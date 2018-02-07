#include<stdio.h>
#include<string.h>
int main()
{
char str[100];
int countspecialchar;
int counter,NULL(0);
countspecialchar=0;
printf("enter a string:");
gets(str);
for(counter=0;str[counter]!=NULL;counter++)
{
countspecialchar++;
}
printf("\n specialcharacter %d",countspecialchar);
return(0);
}
