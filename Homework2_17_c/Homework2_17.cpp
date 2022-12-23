#include <stdio.h>

int main()
{
	double sum=0.0;
	int n;
	printf("Enter number of terms in series:  \n");
	scanf("%d",&n);
	for(int a=1;a<=n;a++)
	{
		sum+=1.0/a;
		printf("1/%d +",a);
	}
	printf("\n\nSum:%f\n",sum);
}
