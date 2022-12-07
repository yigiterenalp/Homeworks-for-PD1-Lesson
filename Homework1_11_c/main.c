#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int number, counter=1, sum=0;
	while(counter<=10)
	{
		printf("\n Enter number:  ");
		scanf("%d", &number);
		printf("%d", number);
		sum = (sum+number);
		printf("Sum of numbers:  %d", sum);
		counter = (counter+1);
	}
	
	
	
	
	return 0;
}
