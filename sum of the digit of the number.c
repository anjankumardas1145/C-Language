#include<stdio.h>
int main(){
int n;
printf("enter the number:");
scanf("%d",&n);
int sum=0;
int rem;
for(;n>0;n=n/10){
rem=n%10;
sum=rem+sum;
}
printf("%d",sum);
}
