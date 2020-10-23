#include <stdio.h>

int		main(void)
{
	int		i;
	int		nb;

	nb = 19 * 20;
	while (i != 21)
	{
		nb++;
		i = 2;
		while (!(nb % i) && i <= 20)
			i++;
	}
	printf("%d\n", nb);
	return (0);
}
