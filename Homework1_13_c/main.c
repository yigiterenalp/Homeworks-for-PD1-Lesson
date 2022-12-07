#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int number=6, counter=1, multiple;
	while(counter<=10)
	{
		printf("\n %d x ", number);
		printf("%d =", counter);
		multiple = (number*counter);
		printf(" %d", multiple);
		counter = (counter+1);	
	}
	
	return 0;
}
