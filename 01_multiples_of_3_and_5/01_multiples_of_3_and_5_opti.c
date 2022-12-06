// https://projecteuler.net/overview=001

#include <stdio.h>

int		sum_divisible_by(int n)
{
	int p;

	p = 999 / n;
	return (n * (p * (p + 1)) / 2);
}

int		main(void)
{
	printf("%d\n",
			sum_divisible_by(3) + sum_divisible_by(5)
			- sum_divisible_by(15));
	return (0);
}
