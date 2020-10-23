// https://projecteuler.net/overview=004
// third page

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
	int		db;
	int		largest_palindrome;

	largest_palindrome = 0;
	a = 999;
	while (a >= 100)
	{
		if (a % 11 == 0)
		{
			b = 999;
			db = 1;
		}
		else
		{
			b = 990; // largest nb <= 999 && nb % 11 == 0
			db = 11;
		}
		while (b >= a && a * b > largest_palindrome)
		{
			if (is_palindrome(a * b))
				largest_palindrome = a * b;
			b -= db;
		}
		a--;
	}
	printf("%d\n", largest_palindrome);
	return (0);
}
