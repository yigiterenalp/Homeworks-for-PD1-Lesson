#include <stdio.h>
#define N 5
int main()
{
	int a[N],b[N];
	printf("Enter array a[] values:  \n");
	for(int j=0;j<N;j++)
	{
		printf("\na[%d] = ",j);
		scanf("%d", &a[j]);
	}
	printf("\n\nReverse of array a[] => b[]  \n");
	for(int i=0;i<N;i++)
	{
		b[i] = a[4-i];
		printf("\n\nb[%d] = %d",i,b[i]);
	}	
}
