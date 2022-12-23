#include <stdio.h>

int main()
{
	int sum=0, n=1, counter=1;
	while(counter<=50)
	{
		sum = sum + n;
		n = n + 1;
		counter = counter + 1;
	}
	printf("Sum of first 50 natural numbers:  %d", sum);
}
