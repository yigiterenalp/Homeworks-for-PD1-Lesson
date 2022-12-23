#include <stdio.h>
int main()
{
	int num,result=0,n,mod,f=1,a=1;
	printf("Enter your number:  \n");
	scanf("%d",&num);
	n=num;
	while(n!=0)
	{
		mod=n%10;
		while(a<=mod)
		{
			f=f*a;
			a=a+1;
		}
		result=result+f;
		n=n/10;
	}
	if(result==num)
	{
		printf("\n%d is Strong number.",num);
	}
	else
	{
		printf("\n%d is not Strong number.",num);
	}
}
