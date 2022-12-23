#include <stdio.h>

int main()
{
	int num,number=1;
	printf("Enter your binary number:  ");
	scanf("%d",&num);
	for(int mod,a=num;a>0;a=a/10)
	{
		mod = a%10;
		if(mod==0)
		{
			number = number*2;
		}
		else
		{
			number = (number+1)*2;
		}
	}
	printf("\n\nYour decimal number is:  %d",number);
	
}
