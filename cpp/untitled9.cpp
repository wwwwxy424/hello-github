#include <stdio.h>//单分支语句,2个整型数
int main()
{
	int a,b;
	a=5;
	b=10;
	int max;
	if(a>=b)
	{
		max=a;
	}
    else
	{
		max=b;
	}
	printf("max=%d",max);
	return 0;
	
}
