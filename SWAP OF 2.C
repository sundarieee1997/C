#include<stdio.h>
int main()
{
int num1,num2,c;
printf("enter the num1:");
scanf("%d",&num1);
printf("enter the num2:");
scanf("%d",num2);
c=num1;
num1=num2;
num2=c;
printf("after swapping,num1=%d",num1);
printf("after swapping,num2=%d",num2);
return(0);
}
