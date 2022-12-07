#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int number=3, sum=0;
	while(number <= 9)
	{
		sum= (sum+number);
		printf("\n %d", sum);
		number= (number+1);
	}
	return 0;
}
