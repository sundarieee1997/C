#include<stdio.h>
int main()
{
int a[10];
int i;
int greater;
printf("enter ten values:");
scanf("%d",&a[i]);
for(i=0;i<10;i++)
{
greater=a[0];
}
for(i=0;i<10;i++)
{
if(a[i]>greater)
{
greater=a[i];
}
}
printf("greater of ten numbers is %d",greater);
return(0);
}
