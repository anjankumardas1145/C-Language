#include<stdio.h>
int main(){
int a[30],n,i,pos,newdata;
printf("enter the element of the array:");
scanf("%d",&n);
for(i=0;i<n;i++){
printf("enter the  array element[%d]::",1);
scanf("%d",&a[i]);

}
//delet any position
printf("enter the position:\n");
scanf("%d",&pos);
for(i=pos;i<n;i++){
a[i]=a[i+1];
}
//display
for(i=0;i<n-1;i++)
printf("%d\t",a[i]);
return 0;
}
