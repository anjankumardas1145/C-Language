#include<stdio.h>
int main(){
float price,value;
printf("enter the valueof the item");
scanf("%f%f",&price,&value);
value=price+(price*18)/100;
printf("the final price is %f",value);
return 0;

}
