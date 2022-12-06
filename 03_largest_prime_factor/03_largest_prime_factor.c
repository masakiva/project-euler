// real	22m50.069s
// user	22m50.009s
// sys	0m0.016s

#include <stdio.h>

int		main(void)
{
	long	i;
	long	j;
	short	b;
	long	nb;

	j = 3;
	nb = 0;
	while (j < 600851475143 / 2)
	{
		if (j % 3 && j % 5 && j % 7 && !(600851475143 % j))
		{
			b = 1;
			i = 2;
			while (i <= j / i)
			{
				if (!(j % i))
				{
					b = 0;
					break ;
				}
				i++;
			}
			if (b)
				nb = j;
		}
		j += 2;
	}
	printf("%ld\n", nb);
	return (0);
}
