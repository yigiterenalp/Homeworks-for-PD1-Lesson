#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int number, a, b=0, c;
	printf("Enter number:  ");
	scanf("%d", &number);
	c = number;
	while(number>0)
	{
		a = (number%10);
		b = b*10+a;
		number = (number/10);
	}
	if(c==b)
	{
		printf("It's palindrome number.");
	}
	else
	{
		printf("It's not a palindrome number.");
	}
	
	return 0;
}
