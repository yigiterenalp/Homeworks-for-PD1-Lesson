#include <math.h>
#include <stdio.h>

int main()
{
	int n, counter=0,a,sum=0,mod,number;
	printf("Enter number:  \n");
	scanf("%d", &n);
	number=n;
	a=n;
	while(n>0)
	{
		n=n/10;
		counter=counter+1;
	}
	while(a>0)
	{
		mod=a%10;
		a=a/10;
		sum=sum+pow(mod,counter);
	}
	if(number==sum)
	{
		printf("\n%d is Armstrong number.", number);
	}
	else
	{
		printf("\n%d is Not Armstrong number.", number);
	}
}
