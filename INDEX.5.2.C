#include<stdio.h>
void incrementarray(int[]);
{
int i;
int array[4]={10,20,30,40};
incrementarray(array);
for(i=0;i<4;i++)
{
printf("%d\t",array[i]);
}
void incrementarray(int arr[])
{
int i;
for(i=0;i<4;i++)
arr[i]++;
}
return(0);
}
