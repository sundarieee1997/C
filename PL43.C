#include<stdio.h>
#include<string.h>
int main()
{
int n,i,s=0,k,m=0,j,c;
char a[100],b[100];
printf("\nEnter the string : ");
scanf("%s",&a);
printf("\nEnter the substring : ");
scanf("%s",&b);
k=strlen(b);
c=k;
for(i=0;a[i]!='\0';i++)
{
for(j=i;j<k;j++)
{
if(a[j]==b[s])
{
s++;
}
}
k=k+1;
if(s==c)
{
m=1;
}
s=0;
}
if(m==0)
{
printf("\n NO!!!");
}
else if(m==1)
{
printf("\nYES!!!");
}
return(0);
}
