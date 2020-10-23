// https://projecteuler.net/overview=006

#include <stdio.h>

int		main(void)
{
	int		limit;
	int		sum;
	int		sum_sq;

	limit = 100;
	sum = limit * (limit + 1) / 2;
	sum_sq = (2 * limit + 1) * (limit + 1) * limit / 6;
	printf("%d\n", sum * sum - sum_sq);
	return (0);
}
