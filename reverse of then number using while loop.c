
#include<stdio.h>
int main(){/*
int n=23456;int sum=0;
while(n>0){
int rem=n%10;
sum=sum*10+rem;
n/=10;
}
printf("%d",sum);*/
int n;//123
int rem;
int sum=0;
printf("enter the number:");
scanf("%d",&n);
rem=n%10;//3
sum=sum*10+rem;//3
n/=10;//12
rem=n%10;//2
sum=sum*10+rem;//32
n/=10;//1
rem=n%10;
sum=sum*10+rem;
printf("the reverse number  is :%d",sum);
}

