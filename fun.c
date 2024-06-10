#include<stdio.h>
int add(int a,int b){
int sum=0;
sum=a+b;
return sum;
}
int main(){
int a=9;int d=8;
add(a,d);
printf("%d",add(a,d));
return 0;
}
