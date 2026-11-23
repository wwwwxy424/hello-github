#include <stdio.h>
int main(void)
{
int sum=0;
	for(int i=1;i<=100;i++)
	{
	if(i%2==0)
	{
		sum=sum+i;
	}
		printf("2+4+6+8+...+100=%d\n",sum);	 //如果把printf放在for外面可直接出结果
	}
	return 0;
	}
