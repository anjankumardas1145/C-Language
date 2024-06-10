#include<stdio.h>
void main()
{
int s,d;
printf("enter the number");
scanf("%d",&s);
d=s%10;
if(d==5)
{
s=s/10;
printf("square=%d%d",s*s++,d*d);
}
else
printf("invalid number");
printf("\n%d",s);


   /* int pmr,cmr,units;
    float total_bill;
    printf("enter the previous meter reading , current meter reading");
    scanf("%d%d",&pmr,&cmr);
    units=cmr-pmr;
    if(units<=100)
    total_bill=units*1.00;
    else if (units>100 && units<=200)
    total_bill=100+(units-100)*2.50;
    else if (units>200 && units<=500)
    total_bill=100+250+(units-200)*3.50;
    else
        total_bill=100+250+1050+(units-500)*5.50;
    printf("\ntotal bill charge=%f",total_bill);*/

}

