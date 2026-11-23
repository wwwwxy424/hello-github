#include <stdio.h>
int main()
{
	while(1)
	{
int n;
	scanf("%d",&n);
	int isPrime=1;
	if(n<2)
		isPrime=0;
	for(int i=2;i<n;i++)
	{
	if(n%i==0)
	{
		isPrime=0;
		break;
	}
	}
	if(isPrime==1)
	{
		printf("%d 是质数\n",n);
	}
	else
	{
	printf("%d 不是质数\n",n);	
	}
if(n==0)break;
	}
	return 0;
	
}
