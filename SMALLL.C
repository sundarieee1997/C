#include<stdio.h>
int main()
{
int a,b,i;
printf("enter the numbers");
scanf("%d %d",&a,&b);
for(i=1;i<b;i++)
{
if(a>b)
{
a=b;
}
}
printf("\n small element in array is:%d",a);
return(0);
}
