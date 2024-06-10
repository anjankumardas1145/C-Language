#include<stdio.h>
int main(){/*
    //FIRST ELIMINATE THE FIRST AND LAST DIGIT THEN USE FOR LOOP FOR THE SUM OF THE MIDDLE
    //this is only applicable for five digit number
int n;//12345
int sum=0;
printf("enter the number:");
scanf("%d",&n);
int p1=n%10;//5
n/=10;//1234
n=n%1000;//234
for(;n>0;n/=10){
int quetient=n%10;//4,3
sum+=quetient;//7
}
printf("the sum is that:%d",sum);
I*/
int n;
int sum=0;
printf("enter the number:");
scanf("%d",&n);
int p1=n%10;//5
//t sum=sum+p1;//5
n/=10;//1234
int p2=n%10;//4
sum=sum+p2;//9
n/=10;//123
int p3=n%10;//3
sum=sum+p3;//12
n/=10;//12
int p4=n%10;//2
sum+=p4;//14
n/=10;//1
int p5=n%10;//1
//m+=p5;
printf("the overall sum of this five digit number is:%d",sum);return 0;
}
