#include<stdio.h>
int main(){
int n,rem,sum=0;//123
printf("enter the number:");
scanf("%d",&n);
while(n>0)

{
 rem=n%10; //3
 sum=sum+rem;//3,5
 n=n/10;//12

}
printf("the sum of digit is:%d",sum);
}
