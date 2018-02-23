#include<stdio.h>
int main()
{
int i,b,flag=0;
printf("enter the number:");
scanf("%d",&b);
for(i=2;i=b/2;++i)
{
if(b %1==0)
{
flag=1;
break;
}
}
if(flag==b)
{
printf("\n%d is a prime number:",b);
}
else
{
printf("\n %d is not a prime number:",b);
}
return(0);
}
