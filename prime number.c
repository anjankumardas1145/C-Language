#include<stdio.h>
int main(){
int n;
printf("enter the number:");
scanf("%d",&n);
int count=0;
for(int i=1;i<n;i++){
if(n%i==0){
count++;
}
}
if(count==0){
printf("this is prime number:");

}
else{
printf("this is not prime");
return 0;
}
}
