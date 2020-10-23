// https://projecteuler.net/overview=005

#include <stdio.h>
#include <stdlib.h>

int		nb_of_primes(int limit)
{
	int		i;
	int		j;
	int		nb;

	if (limit < 2)
		return (0);
	i = 3;
	nb = 1;
	while (i <= limit)
	{
		j = 3;
		while (i % j && j < i)
			j++;
		if (j == i)
			nb++;
		i += 2;
	}
	return (nb);
}

void	fill_with_primes(int limit, int *p)
{
	int		i;
	int		j;

	i = 3;
	*p++ = 2;
	while (i <= limit)
	{
		j = 3;
		while (i % j && j < i)
			j++;
		if (j == i)
			*p++ = i;
		i += 2;
	}
}

void	exponent_in_prime_fact(int limit, int nb_p, int *p, int *a)
{
	int		i;
	int		tmp;

	i = 0;
	while (i < nb_p)
	{
		tmp = p[i];
		a[i] = 0;
		while (tmp <= limit)
		{
			tmp *= p[i];
			a[i]++;
		}
		if (a[i] == 1)
		{
			while (i < nb_p)
				a[i++] = 1;
			break ;
		}
		i++;
	}
}

int		main(void)
{
	int		k;
	int		nb_p;
	int		*p;
	int		*a;
	int		i;
	int		nb;

	k = 20;
	if (k == 1 || k == 2)
	{
		printf("%d\n", k);
		return (0);
	}
	if (k < 1)
		return (0);
	nb_p = nb_of_primes(k);
	if (!(p = (int *)malloc(sizeof(*p) * nb_p)))
		return (0);
	fill_with_primes(k, p);
	if (!(a = (int *)malloc(sizeof(*a) * nb_p)))
		return (0);
	exponent_in_prime_fact(k, nb_p, p, a);
	i = 0;
	nb = 1;
	while (i < nb_p)
	{
		while (a[i])
		{
			nb *= p[i];
			a[i]--;
		}
		i++;
	}
	printf("%d\n", nb);
	free(a);
	free(p);
	return (0);
}
