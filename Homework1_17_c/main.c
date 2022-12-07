#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int number, result=0, counter=2;
	printf("Enter natural number:  ");
	scanf("%d", &number);
	if(number>=2)
	{
		while(counter<=number)
		{
			result = (result+1/counter);
			counter = (counter+2);
		}
		printf("\n  Result:  %d", result);
	}
	else
	{
		printf("Try again!");
	}
	return 0;
}
