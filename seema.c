#include<stdio.h>
void main()
{
int a,b,c;
printf("enter the no:");
scanf("%d%d",&a,&b);
printf("before swap\n a=%d\n b=%d\n",a,b);
c=a;
a=b;
b=c;
printf("after swap\n a=%d\n b=%d\n",a,b);
}
