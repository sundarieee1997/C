#include<stdio.h>
int main()
{
int i,j,count=0;
printf("enter the number");
scanf("%d",&i);\
for(j=2;j<i;j++)
{
if(i%j==0)
{
printf("\n divisible by any number");
count=1;
break;
}
}
if(count==0)
{
printf("\n not divisible by any number");
}
return 0;
}
