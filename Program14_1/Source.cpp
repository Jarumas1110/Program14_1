#include<stdio.h>
int main()
{
	int n,i,sum=0;
	do
	{
		scanf_s("%d", &n);
		for (i = 2; i <= n; i++)
		{
			if (n % i == 0)
			{
				sum += 1;
			}
		}
		if (sum == 1)
		{
			printf("%d is Prime Number\n", n);
			sum = 0;
		}
		else
		{
			sum = 0;
		}
	} while (n != -99);
}