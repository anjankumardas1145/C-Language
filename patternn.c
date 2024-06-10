#include<stdio.h>
#include<math.h>
int main(){
int x,n,fact;
float sum=0.0;
printf("enter the upper range:");
scanf("%d",&n);
printf("enter x value:");
scanf("%d",&x);
for(int i=1;i<=n;i++){
    fact=1;
    for(int j=1;j<=i;j++){
        fact=fact*j;
    }
    sum=sum+pow(x,i)/fact;

}
printf("%f",sum);
return 0;
}
