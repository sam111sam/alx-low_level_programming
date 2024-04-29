/**
 * _strlen_recursion - compute len
 * @s: string
 * Return: len
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
