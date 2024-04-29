int check(int s, int n);
/**
 * is_prime_number - check prime or not
 * @n: num
 * Return: 1(yes) -  0(no)
 */
int is_prime_number(int n)
{
	if (n < 2)
	{
		return (0);
	}
	return (check(2, n));
}

/**
 * check - check prime or not
 * @s: start
 * @n: num
 * Return: 1(success) or 0(fails)
 */
int check(int s, int n)
{
	if (s >= n)
	{
		return (1);
	}
	if (n % s == 0)
	{
		return (0);
	}
	return (check(s + 1, n));
}
