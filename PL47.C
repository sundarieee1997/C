#include<stdio.h>
int main()
{
int n,i,j,k;
printf("enter the angle");
scanf("%d%d%d",&n,&i,&j);
k=n+i+j;
if(k==180)
{
printf("\n they can be interior angles of a triangle");	
}
else
{
printf("\n they can't be interior angles of a triangle");	
}
return(0);
}
