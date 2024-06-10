#include<stdio.h>
int main(){
/*int n=1234;
int sum=0;
while(n>0){
int p=n%10;
sum=sum+p;
n/=10;
}
printf("%d",sum);*/
//TAKING INPUT FROM THE USER
/*
int n;
printf("enter the number:");
scanf("%d",&n);
int sum=0;
while(n>0){
    int quetient=n%10;
    sum=sum+quetient;
    n/=10;

}
printf("sum of the digit is:%d",sum);*/
//USING FOR LOOP
int n;
printf("enter the nunmer:");
scanf("%d",&n);
for(int sum=0;n>0;n/=10){
    int p=n%10;
sum+=p;

}
printf("the sum of the digti is:%d",sum);
return 0;
}
