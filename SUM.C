#include<stdio.h>
void main()
{
int a,b,c;
printf("enter a positive integer number:");
scanf("%d",a);
for(b=0;b<=a;++b)
{
c+=b;
}
printf("sum=%d",c);
getch();
}
