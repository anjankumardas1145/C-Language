#include<stdio.h>
int main(){
int a[100], pos,newdata,size;
printf("Enter the size of array:");
scanf("%d",&size);
for(int i=0;i<size;i++)
{
printf("Enter the element:");
scanf("%d",&a[i]);
}

printf("enter the position \n");
scanf("%d",&pos);
//input new element
printf("enter tnew element \n");
scanf("%d",&newdata);
for(int i=size;i>=pos;i--){
a[i]=a[i-1];
}
a[pos-1]=newdata;
//display
for(int i=0;i<size+1;i++){
printf("%d\t",a[i]);
}
return 0;
}

