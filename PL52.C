#include<stdio.h>
int main()
{
int i,j,s,k,m,a[100];
printf("enter the number");
scanf("%d",&s,&m);
printf("\n enter the elements");
for(i=0;i<s;i++)
{
scanf("%d",&k);
}
for(i=0;i<s;i++)
{
for(j=i+1;j<s;j++)
{
if(a[i]>a[j])
{
k=a[i];
a[i]=a[j];
a[j]=k;
}
}
}
printf("\n the 2nd smallest number is:%d",a[i]);
return 0;
}
