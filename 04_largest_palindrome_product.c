#include <stdio.h>
#include <stdlib.h>

int		string_length(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*itoa(int nb)
{
	int		i;
	int		tmp;
	char	*nbr;

	i = 0;
	tmp = nb;
	while (tmp > 0)
	{
		tmp /= 10;
		i++;
	}
	if (!(nbr = (char *)malloc(sizeof(*nbr) * (i + 1))))
		return (0);
	nbr[i] = 0;
	while (nb > 0)
	{
		i--;
		nbr[i] = nb % 10 + '0';
		nb /= 10;
	}
	return (nbr);
}

int		is_palindromic(int nb)
{
	int		i;
	int		s;
	char *nbr;

	nbr = itoa(nb);
	s = string_length(nbr);
	i = 0;
	while (i < s / 2)
	{
		if (nbr[i] == nbr[s - i - 1])
			i++;
		else
		{
			free(nbr);
			return (0);
		}
	}
	free(nbr);
	return (1);
}

int		main(void)
{
	int		i;
	int		j;
	int		nb;

	nb = 0;
	i = 999;
	while (i * 999 > nb && i >= 100)
	{
		j = 999;
		while (i * j > nb && j >= 100)
		{
			if (is_palindromic(i * j))
				nb = i * j;
			j--;
		}
		i--;
	}
	printf("%d\n", nb);
	return (0);
}
