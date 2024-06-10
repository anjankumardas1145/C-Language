#include<stdio.h>
int main(){
int n;
printf("enter the number:");
scanf("%d",&n);

int sum=0;
int rem;
rem=n/100;//1
sum=sum+rem;//1
rem=n%10;//3
sum=rem+sum;
printf("the sum of first and last digit is:%d ",sum);
return 0;

}
