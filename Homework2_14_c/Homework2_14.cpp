#include <stdio.h>
int main()
{
	int num,result,n=1,mod,f=1,a=1,temp;
	printf("Enter your limit number:  \n");
	scanf("%d",&num);
	printf("All Strong numbers between 1 to %d",num);
	while(n<num)
	{
		result=0,
		n++;
		temp=n;
		while(temp>0)
		{
			mod=temp%10;
			a=1;
			f=1;
			while(a<=mod)
			{
				f=f * a;
				a=a + 1;
			}
			result=result+f;
			temp=temp/10;
		}
		if(result==n)
		{
			printf("\n%d",n);
		}
	}
}
