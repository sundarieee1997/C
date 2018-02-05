#include<stdio.h>
void quicksort(int *array,int1,int r)
{
int p;
if(r<=1)return;
p=partition(array,1,r);
quicksort(array,1,p-1);
quicksort(array,p+1,r);
}
int merge(mylist_t*a,mylist_t*b)
{
node_t*head;
mylist_t*c=&head;
while((a!=NULL)&&(b!=NULL))
{
if(a->value < b->value)
{
c->next=a;
c=a;
a=a->next;
}
else
{
c->next=b;
c=b;
b=b->next;
}
}
c->next=(a==NULL)?b:a;
return head.next;
}
