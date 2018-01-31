#include<stdio.h>
int main()
{
int n,i,j,min,max,flag=0;
clrscr();
printf("\n enter two numbers (intervals):");
scanf("%d%d",&min,&max);
printf("\n the prime numbers between %d and %d are:",min,max);
for(i=min+1;i<max;i++);
{
flag=0;
for(j-2;j<=sqrt(i);j++)
{
if(i%j==0)
{
flag=1;
break;
}
}
if(flag==0)
{
printf("%d",i);
}
}
return(0);
}
