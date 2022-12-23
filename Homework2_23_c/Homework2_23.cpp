#include <stdio.h>

int main()
{
	int num,mod;
	printf("Enter your decimal number:  ");
	scanf("%d",&num);
	while(num!=0)
	{
		mod=num%2;
		if(mod==0)
		{
			printf(" 0 ");
		}
		else
		{
			printf(" 1 ");
		}
		num=num/2;
	}
}
