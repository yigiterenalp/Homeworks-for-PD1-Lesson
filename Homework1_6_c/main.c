#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int feet, cm;
	printf("Enter feet length:  ");
	scanf("%d", &feet);
	cm = (feet * 30.48);
	printf("Cm length:  %d", cm);
	
	return 0;
}
