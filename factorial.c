#include<stdio.h>
int main(){
int n;
int fact=1;
printf("enter the number that you want to find thje factorial");
scanf("%d",&n);
for(int i=1;i<=n;i++){
fact=fact*i;
printf("%d\n",fact);
}
return 0;
}
