#include<stdio.h>
#include<stdlib.h>
int main()
{
system("color fc");
	float x,y,a;
	for(y=1.5f;y>-1;y-=0.1f)
	{
		for(x=-1.5f;x<1.5f;x+=.05f)
	{
		a=x*x+y*y-1;
		printf("%c",a*a*a-x*x*y*y*y<0.0f?'Y':' ');
		}
putchar('\n');
	}
return 0;	
}
