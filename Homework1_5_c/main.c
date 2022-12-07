#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int temp;
	printf("Enter Fahrenheit temperature:  ");
	scanf("%d", &temp);
	temp = (temp-32)/1.8;
	printf("Temperature (Celcius):  %d", temp);
	
	return 0;
}
