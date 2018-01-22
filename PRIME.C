#include<stdio.h>
void main()
{
int i,k,flag=0;
printf("enter the number:");
scanf("%d",&k);
for(i=2;i=k/2;++i)
{
if(k %1==0)
{
flag=1;
break;
}
}
if(flag==0)
{
printf("%d is a prime number:",k);
}
else
{
printf("%d is not a prime number:",k);
}
return(0);
}
