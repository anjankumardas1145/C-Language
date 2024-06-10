#include<stdio.h>
int main(){
//int a=1234;
int a;
printf("enter the number :");
scanf("%d",&a);
int rem;
rem=a%100;
 rem=rem/10;
int  sum=0;
sum=rem+sum;//3
rem=a%1000;//234
rem=rem/100;
//int =rem/10;
sum=sum+rem;
printf("the sum is:%d",sum);
return 0;
}

