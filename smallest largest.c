#include<stdio.h>
void main(){
int num[20],max,min ,n,i;
printf("enter the size of the array:");
scanf("%d",&n);
printf("enter the elementthe array:");
for(i=0;i<n;i++)
scanf("%d",&num[i]);
max=min=num[0];
for(i=0;i<n;i++){
if(num[i]>max)
max=num[i];
if(num[i]<min)//
min=num[i];
printf("%d min is",min);
printf("%d max is",max);

}
}
