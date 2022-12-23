#include <stdio.h>
#include <math.h>

int main()
{
	double a=1.0,sum=0.0;
	int counter=0,x,factorial=1,b=1;
	printf("Enter limit number:  ");
	scanf("%d",&x);
	while(a<x)
	{
		while(b<=a)
		{
			factorial=factorial*b;
			b++;
		}
			if(counter%2==0)
			{
				sum=sum+(pow(a,a))/factorial;
				printf("%f\n",sum);
				counter++;
			}
			else
			{
				sum=sum-(pow(a,a))/factorial;
				printf("%f\n",sum);
				printf("%f\n",sum);
			}
			a=a+2;
	}
}
