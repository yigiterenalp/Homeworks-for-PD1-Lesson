#include <stdio.h>

int main ()
{
	int a, b, area, perimetre;
	printf("Enter first side of rectangle:  ");
	scanf("%d", &a);
	printf("Enter second side of rectangle:  ");
	scanf("%d", &b);
	area = (a*b);
	perimetre = (a*2)+(b*2);
	printf("\nArea of rectagle is: %d \nPerimetre of rectagle is: %d", area, perimetre);
}
