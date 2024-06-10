#include<stdio.h>
int main()
{
int a[10],i,n,p,key,x=0;
printf("Enter the size of array:");
scanf("%d",&n);
printf("Enter the elements of array:\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("Enter the element you want to delete:");
scanf("%d",&key);
for(i=0;i<n;i++)
{
if(a[i]==key)
{
p=i;
x=1;
break;
}
}
if(x!=0){
for(i=p;i<n;i++)
{
a[i]=a[i+1];
}
printf("Elements of array:\n");
for(i=0;i<n-1;i++)
{
printf("%d\t",a[i]);
}
}
else
printf("!error number not found");
return 0;
}
