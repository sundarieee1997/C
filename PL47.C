#include<stdio.h>
int main()
{
int n,i,j,k;
printf("enter the angle");
scanf("%d%d%d",&n,&i,&j);
k=n+i+j;
if(k==180)
{
printf("\n yes");	
}
else
{
printf("\n no");	
}
return(0);
}
