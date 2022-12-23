#include <math.h>
#include <stdio.h>

int main()
{
	int n=1,num,counter=0,a,sum=0,mod,number,result=0;
	printf("Enter number:  \n");
	scanf("%d", &num);
	printf("Armstrong numbers between 1 to %d:  ", num);
	while(n<num)
	{
	number=n;
	a=n;
		while(n>0)
		{
			n=n/10;
			counter=counter+1;
		}
		while(a>0)
		{
			mod=a%10;
			a=a/10;
			sum=sum+ceil(pow(mod,counter));
		}
		if(number==sum)
		{
			printf("\n%d", number);
			n=n+1;
		}
		else
		{
			n=n+1;
		}		
	}
	
}
