#include<stdio.h>
int main(){
//
int n;
printf("enter the number:");
scanf("%d",&n);
//int n=123456;
int sum=0;
int rem1,rem;
 rem1=n%10000;//3456
rem=rem1/1000;//3
rem1=rem1/100;//34
rem1=rem1%10;
sum=rem+rem1;
printf("the sum is:%d",sum);
return 0;
}
