#include<stdio.h>
#include<string.h>
int main()
{
 
  int l=0,i,n;
  printf("Enter the number:");
  scanf("%d",&n);
  while(n%2==0)
  {
      i=n/2;
        n=i;
      printf("%d\t",i);
  }
 return(0);
}
