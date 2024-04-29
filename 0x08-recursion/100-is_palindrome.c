#include <string.h>

int check(int s, int e, char *t);
/**
 * is_palindrome - check if it is palindrome
 * @s: string
 * Return: 1 yes || 0 no
 */
int is_palindrome(char *s)
{
	int len = strlen(s);

	if (len == 0)
	{
		return (1);
	}
	return (check(0, len - 1, s));
}

/**
 * check - check if it is palindrome
 * @s: start
 * @e: end
 * @t: string
 * Return: 1(yes) or 0(no)
 */
int check(int s, int e, char *t)
{
	if (s > e)
	{
		return (1);
	}
	if (t[s] != t[e])
	{
		return (0);
	}
	return (check(s + 1, e - 1, t));
}


