// https://projecteuler.net/overview=009

#include <stdio.h>

int		main(void)
{
	int		s;
	long	a;
	long	b;
	long	c;

	s = 100000;
	a = 3;
	while (a <= (s - 3) / 3)
	{
		b = a + 1;
		while (b < (s - a) / 2)
		{
			c = s - a - b;
			if (c * c == a * a + b * b)
				printf("%ld\n", a * b * c);
			b++;
		}
		a++;
	}
	return (0);
}
