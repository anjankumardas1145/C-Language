#include<stdio.h>
int main()
{
int a[10],i,n,p;
printf("Enter the size of array:");
scanf("%d",&n);
//input element
printf("Enter the elements of array:\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("Enter the position you want to delete:");
scanf("%d",&p);
//
for(i=p-1;i<n;i++)
{
a[i]=a[i+1];
}
printf("Elements of array:\n");
for(i=0;i<n-1;i++)
{
printf("%d\t",a[i]);
}
return 0;
}
