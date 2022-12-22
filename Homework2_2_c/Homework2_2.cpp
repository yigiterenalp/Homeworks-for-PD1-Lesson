#include <stdio.h>
#include <math.h>

int main()
{
	double a, b, c;
	double x1, x2;

	printf("Karekök denkleminin katsayilarini girin: ");
	scanf("%lf%lf%lf", &a, &b, &c);

	double delta = b * b - 4 * a * c;

	if (delta > 0) 
	{
	x1 = (-b + sqrt(delta)) / (2 * a);
	x2 = (-b - sqrt(delta)) / (2 * a);
	printf("Denklemin iki farkli gercek koku vardir: %lf ve %lf\n", x1, x2);
	} 
	else if (delta == 0) 
	{
	x1 = -b / (2 * a);
	printf("Denklemin tek bir gercek koku vardir: %lf\n", x1);
	} 
	else 
	{
	printf("Denklemin gercek koku yoktur.\n");
	}
}
