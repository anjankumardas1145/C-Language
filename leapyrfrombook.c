#include<stdio.h>
int main(){
int year;
printf("enter hte year");
scanf("%d",&year);
if(year%400==0||year%100!=0&& year%4==0)
printf("leap year \n");
else
printf("it is not am leap year");

return 0;
}
