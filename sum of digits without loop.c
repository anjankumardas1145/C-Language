#include<stdio.h>
int main(){
int a=1234;
int sum=0;
int p1=a%10;//4
sum+=p1;//4
a/=10;//123
int p2=a%10;//3
sum+=p2;//7//sum=sum+p2;
a/=10;//12
int p3=a%10;//2
sum+=p3;
a/=10;//1
int p4=a%10;
sum+=p4;
printf("the sum is:%d",sum);
//USING FOR LOOP




}
