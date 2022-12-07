#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int number, a, b;
	printf("Enter number:  ");
	scanf("%d", &number);
	b = (number%10);
	while(number>0)
	{
		a = (number%10);
		number = (number/10);		
	 } 
	printf("First digit of your number is: %d", a);
	printf("\nLast digit of your number is: %d", b);	
	return 0;
}
