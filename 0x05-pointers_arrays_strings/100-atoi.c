#include <stdio.h>
#include "main.h"
#include <stdint.h>
/**
 * _atoi - change string to integer
 * @s: parameter
 * Return: int
 */
int _atoi(char *s)

{
	int64_t res = 0, j = 0, a = 0, i = 0;

	for (; s[i] != '\0'; i++)
	{
		if (s[i - 1] == 45)
			j++;
		if (s[i] >= 48 && s[i] <= 57)
		{
			a++;
			res = res * 10 + (s[i] - '0');
		}
		else
		{
			if (res != 0 || (res == 0 && a != 0))
				break;
		}
	}
if (j % 2 != 0)
	res *= -1;
return (res);
}
