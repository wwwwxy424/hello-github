#include<stdio.h>
int main()
{
	int pwd;
	do    //do和while()区分，如果是while即使密码正确依旧重复
	{
		printf("请输入密码：");
		scanf("%d", &pwd);
	} while (pwd != 1234);   /* 输错了就再问一遍 */	
	
	
	
	
	return 0;
}
