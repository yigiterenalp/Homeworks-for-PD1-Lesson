#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int number, counter=1;
	printf("Enter number:  ");
	scanf("%d", &number);
	while (counter <= 100)
	{
		if(counter%number==0)
		{
			printf("\n %d", counter);
			counter = (counter+1);
		}
		else
		{
			counter = (counter+1);
		}
	}
	
	
	return 0;
}
