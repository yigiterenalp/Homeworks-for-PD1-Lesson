#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int num1, num2, hcf, i;
	printf("Enter first number:  ");
	scanf("%d", &num1);
	printf("\nEnter second number:  ");
	scanf("%d", num2);
	while(i<=num1 || i<=num2)
		{
			if(num1%i==0 && num2%i==0)
			{
				hcf = i;
			}
			i = (i+1);
		}
		printf("\n %d and %d highest common factor is %d.", num1, num2, hcf);
	
	return 0;
}
