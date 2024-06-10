#include<stdio.h>

int main(){
int n;
printf("enter the number:");
scanf("%d",&n);
int digitnumber=0;
for(;n>0;n=n/10){
digitnumber++;
}
printf("%d",digitnumber);
}
