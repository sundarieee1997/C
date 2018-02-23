#include<stdio.h>
int main()
{
int i,n,t1,t2,nextterm;
printf("enter the no of terms:");
scanf("%d",&n);
printf("fibonacci series:");
for(i=1;i<=n;++i)
{

nextterm=t1+t2;
t1=t2;
t2=nextterm;
}
printf("%d",t1);
return(0);
}
