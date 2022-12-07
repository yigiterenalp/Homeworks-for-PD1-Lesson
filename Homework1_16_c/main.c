#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int number=1000, sum=0;
	while(number<=2000)
	{
		printf("\n %d", number);
	    sum = (sum+number);
	    number = (number+2);
	}
	printf("\n Sum of numbers between 1000-2000:  %d", sum);
		
	return 0;
}
