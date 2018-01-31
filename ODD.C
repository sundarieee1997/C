#include<stdio.h>
int main()
{
int num,m=20,n=40;
clrscr();
printf("print odd number in a given range m to n:\n");
for(num=m;num<=n;num++)
{
if(num %2==1)
printf("%d",num);
}
return(0);
}
