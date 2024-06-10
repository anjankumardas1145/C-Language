#include<stdio.h>
int main(){
int n=123;
int sum=0;
int rem;
rem=n/100;//1
sum=rem+sum;
rem=n%100;//23
rem=rem/10;
sum=sum+rem;
printf("%d",sum);
return 0;
}
