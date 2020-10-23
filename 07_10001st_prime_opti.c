// https://projecteuler.net/overview=007

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

int		is_prime(int n)
{
	int		r;
	int		f;

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
	int		limit;
	int		count;
	int		candidate;

	limit = 10001;
	count = 1;
	candidate = 1;
	while (count != limit)
	{
		candidate += 2;
		if (is_prime(candidate))
			count++;
	}
	printf("%d\n", candidate);
	return (0);
}
