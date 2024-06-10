#include<stdio.h>
int main(){
int n;
int rem,result=0,count=0,temp;
temp=n;
printf("enter the number:");
scanf("%d",&n);
while(temp>0){
rem=temp%n;
count++;
temp/=10;

}
temp=n;
while(temp>0){
rem=temp%10;
result=result+Math.pow(rem,count);
temp/=10;
}
if(result==n){
printf("amstrong");
}
}
