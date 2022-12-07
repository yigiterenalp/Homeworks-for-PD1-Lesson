#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int number, a, b=0;
	printf("Enter number:  ");
	scanf("%d", &number);
	while(number>0)
	{
		a = (number%10);
		b = b*10+a;
		number = (number/10);
	}
	printf("%d", b);
	return 0;
}
