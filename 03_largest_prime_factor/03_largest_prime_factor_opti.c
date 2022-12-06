#include <stdio.h>

long	square_root(long nb)
{
	long	i;
	long	min;
	long	max;

	i = nb / 2;
	min = 0;
	max = nb;
	while (max - min > 1)
	{
		if (i * i > nb)
		{
			max = i;
			i -= (max - min) / 2;
		}
		else if (i * i < nb)
		{
			min = i;
			i += (max - min) / 2;
		}
		if (i * i == nb)
			return (i);
	}
	return (nb == 1 ? nb : min);
}

// https://projecteuler.net/overview=003

long	largest_prime_factor(long n)
{
	long	factor;
	long	last_factor;
	long	max_factor;

	if (!(n % 2))
	{
		last_factor = 2;
		n /= 2;
		while (!(n % 2))
			n /= 2;
	}
	else
		last_factor = 1;
	factor = 3;
	max_factor = square_root(n);
	while (n > 1 && factor <= max_factor)
	{
		if (!(n % factor))
		{
			n /= factor;
			last_factor = factor;
			while (!(n % factor))
				n /= factor;
			max_factor = square_root(n);
		}
		factor += 2;
	}
	return (n == 1 ? last_factor : n);
}

int		main(void)
{
	printf("%ld\n", largest_prime_factor(600851475143));
	return (0);
}
