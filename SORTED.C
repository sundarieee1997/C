#include<stdio.h>
#define MAX_SIZE 100
int main()
{
int arr[MAX_SIZE];
int size;
int i,j,temp;
printf("enter the size of array:");
scanf("%d",&size);
printf("enter the elements in array:");
scanf("%d",&arr[i]);
for(i=0;i<size;i++)
{
for(j=i+1;j<size;j++)
{
if(arr[i]>arr[j])
{
temp=arr[i];
arr[i]=arr[j];
arr[j]=temp;
}
}
}
printf("\n elements of array in ascending order:");
for(i=0;i<size;i++)
{
printf("%d\t",arr[i]);
}
return(0);
}
