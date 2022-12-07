#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int number=1;
	while (number <= 10)
	{
		printf("\n %d", (number * number));
		number = number+1;
	}
		
	return 0;
}
