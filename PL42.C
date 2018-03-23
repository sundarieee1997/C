#include <stdio.h>
int main()
{
int k[100],j,temp,n,i,s[100],count=0;
printf("\nEnter the size of the array: ");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&k[i]);
s[i]=k[i];
}
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(k[i]>k[j])
{
temp=k[i];
k[i]=k[j];
k[j]=temp;
}
}
}
for(i=0;i<n;i++)
{
if(k[i]==s[i])
{
count+=1;
}
}
if(count==n)
{
printf("\nThe given array is already soretd.");
}
else
{
printf("\nThe given array is not soretd.");
}
return 0;
}
