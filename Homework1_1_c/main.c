#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a, b;
	printf("Enter first number:  ");
	scanf("%d", &a);
	printf("Enter second number:  ");
	scanf("%d", &b);
	printf("Sum of two numbers:  %d", a+b);
	return 0;
}
