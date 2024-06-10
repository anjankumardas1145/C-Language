#include<stdio.h>
int sum( int a,int b);
int main(){
int a,b;
printf("enter the number");
scanf("%d%d",&a,&b);



int s=sum(a,b);
printf("%d sum is",s);
return 0;
}
int sum( int x,int y){
return x+y;

}
