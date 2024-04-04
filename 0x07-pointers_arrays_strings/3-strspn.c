/**
 * _strspn - number of charfound in str1 that are in str2
 * @s: string to bechecked
 * @accept: collection of char
 * Return: int
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int i, j, flag = 0;

	for (i = 0; s[i]; i++)
	{
		if (flag)
			return (count);
		for (j = 0; accept[j]; j++)
		{
			if (accept[j] == s[i])
			{
				flag = 0;
				count++;
				break;
			}
			flag = 1;
		}
	}
	return (count);
}
