#include<stdio.h>
int factorial(int a);
int main()
{
int i,a;
printf("enter the number");
scanf("%d",&a);
for(i=1;i<=a;i++)
{
a=a*i;
}
printf("\n the factorial is:%d",a);
return(0);
}
