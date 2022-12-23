#include <stdio.h>
#include <math.h>

int main()
{
	double a,sum=0,fact=1;
	int n,x;
	printf("Enter limit number:  ");
	scanf("%d",&n);
	printf("\nEnter your x number:  ");
	scanf("%d",&x);
	for(double a=0;a<=n;a++)
	{
		if(a==0)
		{
			fact=1;
		}
		else
		{
			fact*=a;
		}
		printf("(%d^%lf)/%lf! + ", x, a, a);
		sum+=pow(x,a)/fact;
	}
	printf("\nSum = %lf",sum);
}
