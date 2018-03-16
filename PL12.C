#include <stdio.h>
int main()
{
    int a[10],b,c,r=0,temp,i;
    printf("enter the two numbers");
    scanf("%d%d",&b,&c);
    printf("enter the array size");
     scanf("%d",&a[i]);
    for(i=0;i<b;i++)
    while(r<c)
    {
        temp=a[b-1];
        for(i=b-1;i>0;i--)
        {
            a[i]=a[i-1];
        }
        a[0]=temp;
        r++;
        
    }
    for(i=0;i<b;i++)
    {
        printf("%d",a[i]);
    }
return (0);
}
