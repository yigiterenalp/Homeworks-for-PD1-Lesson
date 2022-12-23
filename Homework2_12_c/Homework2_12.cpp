#include <stdio.h>

int main()
{
	int n,sum=0,i,num;
	printf("Enter limit number:  \n");
	scanf("%d",&num);
	printf("Perfect numbers between 1 to %d:  \n",num);
	for(n=1;n<=num;n++)
	{
		for(i=1;i<=n;i++)
		{
			if(n%i==0)
			{
			sum=sum+i;
			}
		}
		if(sum==n)
		{
		printf("%d\n",n);
		}
	}
} 
