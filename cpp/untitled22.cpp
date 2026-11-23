#include <stdio.h>

int main(void)
{
	int n;
	scanf("%d", &n);
	
	int isPrime = 1;        /* 先假设是质数 */
	if (n < 2) isPrime = 0; /* 1 和 0 不是质数 */
	
	for (int i = 2; i < n; i++)
	{
		if (n % i == 0)     /* 能分匀 → 找到因子 */
		{
			isPrime = 0;    /* 不是质数 */
			break;          /* 确定了，提前收工 */
		}
	}
	
	if (isPrime == 1)
		printf("%d 是质数\n", n);
	else
		printf("%d 不是质数\n", n);
	
	return 0;
}
