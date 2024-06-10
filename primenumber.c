#include<stdio.h>
int main()
{
	int n,i,j,p=0;
	printf("Enter the number:");
	scanf("%d",&n);
	for(i=2;i<=n;i++)
	{
		int count=0;
		for(j=1;j<=i;j++)
		{
			if(i%j==0)
			count++;
		}
		if(count==2){
		printf("%d,",i);
		p++;
	}
	}
	printf("\nThere are %d number of prime number",p);

}
