int _sqrt(int s, int n);
/**
 * _sqrt_recursion - xompute sqrt
 * @n: num
 * Return: int
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(0, n));
}

/**
 * _sqrt - helper func
 * @s: ans
 * @n: num
 * Return: int
 */
int _sqrt(int s, int n)
{
	if (n < 0 || (s * s > n))
	{
		return (-1);
	}
	if (s * s == n)
	{
		return (s);
	}
	return (_sqrt(s + 1, n));
}
