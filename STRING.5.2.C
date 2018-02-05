#include<stdio.h>
bool isnumber(string s)
{
for(int i=0;i<s.length();i++)
if(isdigit (s[i])==false)
return false;
return true;
}
int main()
{
string str="7485";
if(isnumber(str))
{
printf("integer");
}
else
{
printf("string");
}
return(0);
}
