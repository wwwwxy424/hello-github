#include <stdio.h> //U10优化
int main()
{
int a,b,c;
	a=5;
	b=10;
	c=6;
	int max;
	if(a>b)
	{
	max=a;	
	}
	else
	{
		max=10;
	}
	if(c>max)
	{
		max=c;		
	}
	printf("max=%d",max);
	return 0;
	
}
