#include <stdio.h>  //分支判断，3整型数
int main()
{
int a,b,c;
	a=5;
	b=10;
	c=6;
	int max;
	if(a-b>0)
	{
		max=a;
	}
	else
	{
		max=b;
	}
	if(a-c>0)
	{
		max=a;
	}
	else
	{
		max=c;
	}
	if(b-c>0)
	{
		max=b;
	}
	else
	{
		max=c;
	}
	printf("max=%d",max);
	return 0;
}
