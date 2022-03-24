#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 nu success
 */
int main(void)
{
	int a = 0;
	int sum = 0;

	while (a < 1024)
	{
		if (a % 3 == 0 || a % 5 == 0)
		{
			sum += a;
		}
		a++;
	}
	printf("%d\n", sum);
	return (0);
}

