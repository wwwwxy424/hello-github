#include <stdio.h>  //斐波那契数列
int main()
{
int a=1 , b=1;
	for(int i=1;i<=20;i++)
	{
		printf("%d ",a);
		int next=a+b;
		a=b;
		b=next;
	}
	printf("\n");
	return 0;
}
