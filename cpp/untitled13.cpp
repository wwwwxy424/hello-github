#include <stdio.h> //switch分支优化if结构
int main()
{
	printf ("1---登录\n");
	printf ("2---注册\n");
	printf ("3---退出\n");
	int number;
	scanf("%d",&number);
	switch(number)
	{
	case 1:
		printf("执行登录\n");
		break;
	case 2:
		printf("执行注册\n");
		break;
	case 3:
		printf("执行退出\n");
		break;
	default:
		printf("请输入1-3数字\n");
	}
	return 0;
	
}
