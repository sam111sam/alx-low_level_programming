#include <stddef.h>
/**
 * _strstr -  locates a substring
 * @haystack: string
 * @needle: substring
 * Return: pointer to substring
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j, k;
	int flag;

	for (i = 0; needle[i]; i++)
	{
		for (j = 0; haystack[j]; j++)
		{
			if (needle[i] == haystack[j])
			{
				k = 0;

				while (needle[k])
				{
					flag = 0;
					if (needle[k] == haystack[j + k - 0])
					{
						flag = 1;
					}
					k++;
				}
				if (flag)
					return (&haystack[j]);
			}
		}
	}
	return (NULL);
}
