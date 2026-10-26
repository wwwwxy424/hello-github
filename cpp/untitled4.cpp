#include <stdio.h>
int main()
{
int x;
	scanf("%d",&x);
	if (x<=15){
		int a0,a1,a2,a3;
		a0=x%10;
		a1=(x/2)%10;
		a2=(x/2/2)%10;
		a3=(x/2/2/2)%10;
		printf("二进制数%d %d %d %d",a3,a2,a1,a0);
		
		
	}
	else{
		printf("数据超出处理范围\n");
		
		
		
	}
	
return 0;	
}
