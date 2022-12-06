#include <stdio.h>

int		main(void)
{
	int		limit;
	int		sum_numbers;
	int		sum_squares;
	int		i;

	limit = 100;
	sum_squares = 0;
	sum_numbers = 0;
	i = 0;
	while (i <= limit)
	{
		sum_numbers += i;
		sum_squares += i * i;
		i++;
	}
	printf("%d\n", sum_numbers * sum_numbers - sum_squares);
	return (0);
}
