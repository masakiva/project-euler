#include <stdio.h>

int		main(void)
{
	int		i;
	int		j;
	int		sum;

	i = 1;
	j = 2;
	sum = 0;
	while (i <= 4000000 || j <= 4000000)
	{
		if (i % 2 == 0)
			sum += i;
		if (j % 2 == 0)
			sum += j;
		i += j;
		j += i;

	}
	printf("%d\n", sum);
	return (0);
}
