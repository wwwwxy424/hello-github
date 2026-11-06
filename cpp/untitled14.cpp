#include <stdio.h>
int main()
{
int score;
	scanf("%d",&score);
	if(score<0 || score>50 )
	{
		printf("ERROR");
	}
	else
	{
		if(score<30)
		{
			printf("good");
		}
	}
	if (score<40)
	{
		printf("Excellent");
	}
	else
	{
		printf("Outstanding");
	}
	return 0;
	
}
