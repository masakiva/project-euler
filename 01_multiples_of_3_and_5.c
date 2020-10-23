#include <stdio.h>

int		main(void)
{
	int		i;
	int		sum;

	i = 0;
	while (i < 1000)
	{
		if (!(i % 3) || !(i % 5))
			sum += i;
		i++;
	}
	printf("%d\n", sum);
	return (0);
}
