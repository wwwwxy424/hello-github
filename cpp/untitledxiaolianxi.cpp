#include <stdio.h>
int main()
{
	int score;
	scanf("%d",&score);
	if(score<0 || score>50)
	{
		printf("Error\n");
	}
	if(score<30)
	{
		printf("Good\n");
	}
	if(score>=40)
	{
		printf("Outstanding\n");
	}
	else
	{
		printf("Excellent\n");
	}
	return 0;
}
