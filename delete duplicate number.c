#include<stdio.h>
int main()
{
	// right a program delete duplicate number
	int a[10],n,i,j,k;
	printf("Enter the size of array:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter the elements:");
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;)
		{
			if(a[i]==a[j])
			{
		        for(k=j;k<n;k++)
		        {
			        a[k]=a[k+1];
	    	    }
	    	    n--;
			}
			else
			{
				j++;
			}
	    }
	}
	printf("Elements of array:");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	return 0;
}
