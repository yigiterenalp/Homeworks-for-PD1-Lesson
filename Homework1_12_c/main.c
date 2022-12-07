#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int number=0, counter=1;
	while(number<=100)
	{
		printf("\n %d:  ", counter);
		printf("%d", number);
		number = (number+5);
		counter = (counter+1);
	}
	return 0;
}
