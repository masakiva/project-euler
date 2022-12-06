#include <stdio.h>

int		main(void)
{
	int		i;
	int		j;
	int		n;

	n = 1;
	i = 1;
	while (n < 10001)
	{
		i += 2;
		j = 3;
		while (i % j && j <= i)
			j += 2;
		if (j == i)
			n++;
	}
	printf("%d\n", i);
	return (0);
}
