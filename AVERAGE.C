#include <stdio.h>
int main()
{
	int n,i,average,a,sum;
	printf("enter the no of element:");
	scanf("%d",&n);
	for(i-0;i<n;++i)
	{
		printf("%d\n  enter number",i+1);
		scanf("%d",&a);
		sum+=a;
	}
	average=sum/n;
	printf("\n average:%d",average);
	return(0);
}
