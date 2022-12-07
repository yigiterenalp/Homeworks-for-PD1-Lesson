#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int number;
	printf("Enter natural number:  ");
	scanf("%d", &number);
	if(number>=1)
	{
		while(number>=1)
		{
			printf("\n %d", number);
			number = (number-1);
		}
	}
	else
	{
		printf("Number is not natural, Try again!");
		
	}
	return 0;
}
