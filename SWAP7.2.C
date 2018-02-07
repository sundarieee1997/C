#include<stdio.h>
int main()
{
int number1,number2,c;
printf("enter the number1:");
scanf("%d",&number1);
printf("enter the number2:");
scanf("%d",number2);
c=number1;
number1=number2;
number2=c;
printf("after swapping,number1=%d",number1);
printf("after swapping,number2=%d",number2);
return(0);
}
