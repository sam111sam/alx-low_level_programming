#include <stdio.h>
/**
 * main - sinds highest prime
 * Return: 0 on success
 */
int main(void)
{
	long int prime = 0;
	long int num = 612852475143;
	long int a = 2;

	while (a <= num)
	{
		if (num % a == 0)
		{
			num = num / a;
			if (prime <= a)
				prime = a;
			a = a - 1;
		}
		a++;
	}
	printf("%ld", prime);
	printf("\n");
	return (0);
}
