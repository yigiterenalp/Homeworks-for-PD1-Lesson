#include <stdio.h>
#include <math.h>

int main()
{
	int b=1,a=1,n,sum=1;
	printf("Enter your limit number:  ");
	scanf("%d",&n);
	while(b<n)
	{
		sum+=sum*(pow(10,b))+a;
		b++;
	}
	printf("Sum = %d",sum);
}
