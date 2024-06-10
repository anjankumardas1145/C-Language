#include<stdio.h>
int fac(int a)
{
if(a==0  || a==1){
return 1;
}
int f=a*fac(a-1);
return f;
}
int main()
{
int a=5;
printf("factorial of %d is %d",a,fac(a));
return 0;
}
