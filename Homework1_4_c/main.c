#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int temp;
	printf("Enter temperature:  ");
	scanf("%d", &temp);
	if(temp > 0)
		printf("Temperature is above freezing point.");
	else if(temp < 0)
		printf("Temperature is below freezing point.");
	else
		printf("Temperature is freezing point.");
	
	return 0;
}
