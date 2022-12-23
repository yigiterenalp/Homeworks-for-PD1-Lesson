#include <stdio.h>

int main()
{
	int n=2, counter=0, power=1;
	while(counter<4)
	{
		power = power*n;
		counter = counter + 1;		
	}
	printf("Result:  %d", power);
}
