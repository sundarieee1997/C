#include<stdio.h>
int main()
{
int first,fiff,terms,value,sum=0;
printf("enter the no of terms in AP series");
scanf("%d",&terms);
printf("enter first term & common different opf AP series");
scanf("%d%d",&first,&diff);
value=first;
printf("AP series);
for(i=0;i<terms;i++)
{
printf("%d",value);
sum+=value;
value=value+diff;
}
printf("sum of the AP series till %d terms is %d",terms,sum);
return(0);
}
