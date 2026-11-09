#include<stdio.h>       //char字符
int main()
{
char c;
	c = 'A'+3; //'A'=65
	scanf("%c",&c);
	if(c>=97&&c<=122)   //97='a'  122='z'可替换
	{
	   c=c-('b'-'B');
		printf("转化为大写字符%c\n",c);
	}
	else
	{
	printf("原样字符%c\n",c);	
	}
	return 0;
	
}
