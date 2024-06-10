#include<stdio.h>
void main()
{
int a,b,c,d,max;
printf("enter the number:\n");
scanf("%d%d%d%d",&a,&b,&c,&d);
max=a>b?(a>c?(a>d?a:d):(c>d?c:d)):(b>c?(b>d?b:d):(c>d?c:d));
printf("biggest of 4 no.%d",max);
}
