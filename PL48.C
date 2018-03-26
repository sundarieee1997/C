#include<stdio.h>
int main()
{
int s,k;
printf("\nEnter the number : ");
scanf("%d",&s);
if(s<=3)
{
printf("\n No odd factors for %d.",s);
}
else
{
printf("\n The odd factors are : ");
for(k=3;k<s;k++)
{
if(s%k==0)
{
printf("%d\n",k);
}
}
}
return 0;
}
