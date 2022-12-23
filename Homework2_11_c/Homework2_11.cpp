#include <stdio.h>

int main()
{
	int i,sum=0,n;
	printf("Enter number:  \n");
	scanf("%d", &n);
	for(i=1;i<n;i++)
	{
		if(n%i==0)
		{
			sum=sum+i;
		}
	}
	if(sum==n)
	{
		printf("%d is Perfect number.",n);
	}
	else
	{
		printf("%d is not Perfect number.",n);
	}
}
