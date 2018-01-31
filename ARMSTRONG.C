#include<stdio.h>
int main()
{
int number,originalnumber,remainder,result=0;
printf("enter a three digit integer:");
scanf("%d",&number);
originalnumber=number;
while(originalnumber!=0)
{
remainder=originalnumber%10;
result+=remainder*remainder*remainder;
originalnumber/=10;
}
if(result==number)
{
printf("yes");
}
else
{
printf("no");
}
return(0);
}
