#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int number, counter=1, result;
	printf("Enter number:  ");
	scanf("%d", &number);
	while(counter<=10)
	{
		printf("\n %d x ",number);
		printf("%d = ", counter);
		result = (number*counter);
		printf("%d", result);
		counter = (counter+1);
	}
	return 0;
}
