#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int a, b, c;
	printf("Enter a number:  ");
	scanf("%d", &a);
	printf("Enter b number:  ");
	scanf("%d", &b);
	printf("Enter c number:  ");
	scanf("%d", &c);
	if(a > b && a > c)
	{
		printf("a is the largest number.");
	}
	else if(b > a && b > c)
	{
		printf("b is the largest number.");
	}
	else
	{
		printf("c is the largest number.");
	}
	return 0;
}
