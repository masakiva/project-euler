// https://projecteuler.net/overview=004

#include <stdio.h>

int		reverse(int n)
{
	int		reversed;

	reversed = 0;
	while (n > 0)
	{
		reversed = 10 * reversed + n % 10;
		n /= 10;
	}
	return (reversed);
}

int		is_palindrome(int n)
{
	return (n == reverse(n));
}

int		main(void)
{
	int		a;
	int		b;
	int		largest_palindrome;

	largest_palindrome = 0;
	a = 999;
	while (a >= 100)
	{
		b = 999;
		while (b >= a)
		{
			if (a * b <= largest_palindrome)
				break ;
			if (is_palindrome(a * b))
				largest_palindrome = a * b;
			b--;
		}
		a--;
	}
	printf("%d\n", largest_palindrome);
	return (0);
}
