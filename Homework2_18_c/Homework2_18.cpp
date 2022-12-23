#include <stdio.h>

int main()
{
	int a, b, n;
	printf("Enter limit number:  ");
	scanf("%d", &n);
	for(int a=1;a<=n;a++)
	{
		printf("\n");
		for(int b=1;b<=a;b++)
		{
			if(a%2==0)
			{
				if(b%2==0)
				{
					printf("1");
				}
				else
				{
					printf("0");
				}
			}
			else
			{
				if(b%2==0)
				{
					printf("0");
				}
				else
				{
					printf("1");
				}
			}
		}
	}
}
