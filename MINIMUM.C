#include<stdio.h>
int main()
{
int array[50],size,i,small;
printf("\n enter the size of the array:");
scanf("%d",&size);
printf("\n enter %d elements of the array:",size);
scanf("%d",&array[i]);
for(i=0;i<size;i++)
{
small=array[i];
}
for(i=1;i<size;i++)
{
if(small>array[i])
{
small=array[i];
}
}
printf("\n small element in array is:%d",small);
return(0);
}
