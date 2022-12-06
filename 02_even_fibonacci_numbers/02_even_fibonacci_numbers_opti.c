// https://projecteuler.net/overview=002
// https://www.geeksforgeeks.org/even-fibonacci-numbers-sum/

#include <stdio.h>

int		main(void)
{
	int		i;
	int		j;
	int		k;
	int		sum;

	i = 0;
	j = 2;
	sum = i + j;
	while (j < 400000000)
	{
		k = 4 * j + i;
		if (k > 400000000)
			break ;
		i = j;
		j = k;
		sum += j;
	}
	printf("%d\n", sum);
	return (0);
}
