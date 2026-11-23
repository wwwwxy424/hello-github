#include <stdio.h> //设计函数 //返回类型
void showMap(int width,int weight)
{
	for(int i=0;i<weight;i++)
	{
		for(int j=0;j<width;j++)
		{
			printf("* ");
		}
		printf("\n");
	}
}
int main()
{
	while(1)
	{
	printf("------- 游戏地图 -------\n");
	printf("    1  -  入门级         \n");
	printf("    2  -  基础级         \n");
	printf("    3  -  困难级         \n");
	printf("-------------------------\n");
	printf("-请输入数字（1-3)选择:");
	int n;
	scanf("%d",&n);
	switch(n)
	{
	case 1:
		printf("入门地图\n");
		showMap(10,10);
		break;
	case 2:
		printf("基础地图\n");
		showMap(15,15);
		break;
	case 3:
		printf("困难地图\n");
		showMap(20,20);
		break;
	case 4:
	return 0;
		default:
		printf("输入错误\n");
	}

	


	}
return 0;
}
