#include <stdio.h>
int main() 
{
int a,b,i,j,count=0;
printf("enter the numbers");
scanf("%d %d",&a,&b);
for(i=a;i<=b;i++)
{
for(j=2;j<=b;j++)
{
if((j*j)==i)
{
count=count+1;
}
}
}
printf("\n %d",count);
return 0;
}
