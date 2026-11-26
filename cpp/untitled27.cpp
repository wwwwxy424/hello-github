#include <stdio.h>
int main()
{
for(int n=100;n<1000;n++)
{
	int a;
	a=n/100;
	int b;
	b=n/10%10;
	int c;
	c=n%10;
	if(a*a*a+b*b*b+c*c*c==n)
	{
		printf("%d\n",n);
	}	
}
printf("\n");
	return 0;
	
	
	
}
