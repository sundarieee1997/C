#include<stdio.h>
int main()
{
int arr[50],a,i,b;
printf("\n enter the size of the array:");
scanf("%d",&a);
printf("\n enter %d elements of the array:",a);
scanf("%d",&arr[i]);
for(i=0;i<a;i++)
{
b=arr[i];
}
for(i=1;i<a;i++)
{
if(b>arr[i])
{
b=arr[i];
}
}
printf("\n small element in array is:%d",b);
return(0);
}
