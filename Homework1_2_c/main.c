#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int r, a;
	printf("Enter radius of circle:  ");
	scanf("%d", &r);
	a=r*r*3;
	printf("Area of circle:  %d", a);
	return 0;
}
