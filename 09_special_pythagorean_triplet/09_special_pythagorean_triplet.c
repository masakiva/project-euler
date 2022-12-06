#include <stdio.h>

int		main(void)
{
	int		a;
	int		b;
	int		c;
	int		nb;
	int		sum;

	sum = 1000;
	a = 1;
	nb = 0;
	while (a <= sum / 3)
	{
		b = a + 1;
		while (b <= sum / 2)
		{
			c = b + 1;
			while (a + b + c <= sum)
			{
				if (a * a + b * b == c * c)
					break ;
				c++;
			}
			if (a + b + c == sum)
			{
				nb = a * b * c;
				printf("%d^2 + %d^2 = %d^2\n", a, b, c);
				break ;
			}
			b++;
		}
		if (nb)
			break ;
		a++;
	}
	printf("%d\n", nb);
	return (0);
}
