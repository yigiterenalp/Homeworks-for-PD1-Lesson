#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int number, digit=0;
	printf("Enter number:  ");
	scanf("%d", &number);
	while(number>0)
	{
		number = (number/10);
		digit = (digit+1);
	}
	printf("Your number has %d", digit);
	printf(" digits.");
		
	return 0;
}
