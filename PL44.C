#include<stdio.h>
#include<string.h>
int main()
{
int n,i,s,m,j,d=0;
printf("\n Enter the perimeter : ");
scanf("%d",&n);
printf("\n Enter the area of rectangle : ");
scanf("%d",&s);
m=n/2;
for(i=1;i<=s;i++)
{
for(j=1;j<=m;j++)
{
if(i+j==m&&i*j==s)
{
d=1;
break;
}
}
}
if(d==1)
{
printf("\n yes");	
}
else if(d==0)
{
printf("\n no");	
}
return(0);
}
