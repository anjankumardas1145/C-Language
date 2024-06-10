#include<stdio.h>
int main(){
//int n=1234;
int n;
printf("enter two number:");
scanf("%d",&n);
int sum=0;
int rem;
rem=n%1000;//234
rem=rem/100;//2
sum=sum+rem;
rem=n%100;//34
rem=rem/10;
sum=sum+rem;
printf("the sum is %d",sum);
return 0;


}
