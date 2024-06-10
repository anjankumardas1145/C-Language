#include<stdio.h>
void printprice(float value);
int main(){
int value;
printf("enter the value of the item");
scanf("%d",&value);
printprice(value);
return 0;
}
void printprice( float value){
value=value+(0.18*value);
printf("the value is %f",value);
}
