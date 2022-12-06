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

int		is_prime(long n)
{
	long	r;
	long	f;

	if (n == 1)
		return (0);
	else if (n < 4)
		return (1);
	else if (!(n % 2))
		return (0);
	else if (n < 9)
		return (1);
	else if (!(n % 3))
		return (0);
	else
	{
		r = square_root(n);
		f = 5;
		while (f <= r)
		{
			if (!(n % f))
				return (0);
			if (!(n % (f + 2)))
				return (0);
			f += 6;
		}
		return (1);
	}
}

int		main(void)
{
	long	sum;
	long	i;
	int		limit;

	limit = 2000000;
	sum = 5;
	i = 5;
	while (i + 2 < limit)
	{
		if (is_prime(i))
			sum += i;
		if (is_prime(i + 2))
			sum += i + 2;
		i += 6;
	}
	if (i < limit && is_prime(i))
		sum += i;
	printf("%ld\n", sum);
	return (0);
}
