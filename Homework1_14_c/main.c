#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int number, factorial=1, counter=1;
	printf("Enter your number:  ");
	scanf("%d", &number);
	while(counter<=number)
	{
		factorial = (factorial*counter);
		counter = (counter+1);
	}
	printf("Your number's factorial is:  %d", factorial);
		
	return 0;
}
