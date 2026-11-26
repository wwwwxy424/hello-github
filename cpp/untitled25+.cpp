#include <stdio.h>
int main()
{
	for(int i=2;i<100;i++)
	{
		int isPrime=1;
		for(int j=2;j<i;j++)
		{
			if(i%j==0)
			{
				isPrime=0;
				break;
			}
		}
		if(isPrime==1)
		{  
			printf("%d ",i);
		}
		
	}
printf("\n");
	return 0;
	
	
	
	
}
