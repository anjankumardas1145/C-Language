#include<stdio.h>
int main(){
//int num=0;
//printf("%d",num);
int num;
printf("enter the number:");
scanf("%d",&num);
for(int i=num;num>0;){
    printf("the number is %d ",i--);
}
 //printf("the number is %d \n",num);

return 0;
}
