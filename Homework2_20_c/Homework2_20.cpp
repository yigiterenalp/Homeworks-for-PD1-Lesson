#include <stdio.h>
#include <math.h>

int main()
{
	int x,a,n,sum=0;
	printf("Enter your x number:  ");
	scanf("%d",&x);
	printf("Enter your limit number:  ");
	scanf("%d",&n);
	for(int a=1;a<=n;a=a+2)
	{
		printf("%d^%d + ",x,a);
		sum+=pow(x,a);
	}
	printf("\nSum of series: %d",sum);
}
