#include <stdio.h>

	int main()
{
	int num,i,count,n,sum=0;
    printf("Enter max range: ");
    scanf("%d",&n);

    for(num = 1;num<=n;num++){

         count = 0;

         for(i=2;i<=num/2;i++){
             if(num%i==0){
                 count++;
                 break;
             }
        }
        
         if(count==0 && num!= 1)
            {
            	sum = sum + num;
			}
    }
	printf("Sum of prime number between 1 to %d:  %d ",n,sum);
	
}	

