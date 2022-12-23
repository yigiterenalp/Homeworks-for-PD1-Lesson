#include <stdio.h>

int main()
{
	int number=100,sum=0;
	printf("Integers between 100 and 200 which are divisible by 9:  \n");
	while(number<200)
	{
		if(number%9==0)
		{
			printf("\n%d",number);
			sum=sum+number;
			number=number+1;
		}
		else
		{
			number=number+1;
		}
	}
	printf("\n\nSum of all integers between 100 and 200 which are divisible by 9:  %d",sum);
}
