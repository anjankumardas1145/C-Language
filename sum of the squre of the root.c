#include<stdio.h>
int main(){
int n;
printf("enter the number:");
scanf("%d",&n);
int sum=0;
while(n>0){
int rem=n%10;
rem=rem*rem;
sum+=rem;
n/=10;
}
printf("the sum of the squre of the number is:%d",sum);
}
