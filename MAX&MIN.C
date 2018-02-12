#include <stdio.h>
#define MAX_SIZE 100
	int main()
	{
	int arr[MAX_SIZE];
	int size,i,max,min;
	printf("enter size of array:");
	scanf("%d",&size);
	printf("\n enter elements in array:");
	scanf("%d",&arr[i]);
	for(i=0;i<size;i++)
	{
		max=arr[0];
		min=arr[0];
	}
	for(i=1;i<size;i++)
	{
		if(arr[i]>max)
		{
			max=arr[i];
		}
	}
	if(arr[i]<min)
	{
		min=arr[i];
	}
	printf("\n the max number is:%d",max);
	printf("\n the min number is:%d",min);
	return(0);
}
