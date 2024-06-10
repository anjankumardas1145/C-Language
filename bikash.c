#include<stdio.h>
int main()
{
   int num,rem,sum =0;
   puts("Enter any number :\n");
   scanf("%d",&num);
   for (int i=10;i<num*10;i=i*10)//10*10=100
   {
    rem=num%i;//0
    rem=rem/(i/10);
    sum=sum+rem;
   }
   printf("Sum of all digit is : %d",sum);
   return 0;
}
}
