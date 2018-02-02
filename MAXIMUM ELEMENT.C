#include<stdio.h>
int main()
{
int array[50],size,i,largest;
printf("\n enter the size of the array:");
scanf("%d",&size);
printf("\n enter %d elements of the array:",size);
scanf("%d",&array[i]);
for(i=0;i<size;i++)
{
largest=array[0];
}
for(i=1;i<size;i++)
{
if(largest<array[i])
{
largest=array[i];
}
}
printf("\n largest element in array is:%d",largest0;
return(0);
}
