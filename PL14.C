#include <stdio.h>
#include<string.h>
int main() 
{
char s[100],s1[100];
int i,j,k;
printf("enter the string");
scanf("%[^\n]s",s1);
k=strlen(s);
for(i=0;i<k;i++)
{
s1[i]=s[k-i-1];
}
s1[k]='\0';
printf("%s\n",s1);
for(i=0;i<k;i++)
{
if(s1[i]=='a'||s1[i]=='e'||s1[i]=='i'||s1[i]=='o'||s1[i]=='u'||s1[i]=='A'||s1[i]=='E'||s1[i]=='I'||s1[i]=='O'||s1[i]=='U')
{
   for(j=i;j<k;j++)
   {
     s1[j]=s1[j+1];

   }
   k--;
   i--;
}
}
printf("%s",s1);


	return 0;
}
