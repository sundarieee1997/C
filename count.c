#include<stdio.h>
int main()
{
long long a;
int count=0;
printf("enter an integer:");
scanf("%d",&a);
while(a!=0)
{ 
a/=10;
++count;
}
printf("number of digits:%d",count);
return(0);
}
