#include <stdio.h>
/**
 * main - print fizz(3x) buzz(5x) and fizzbuzz(15x)
 * Return: 0 for success
 */
int main(void)
{
	int a = 1;

	while (a <= 100)
	{
		if (a % 3 == 0 && a % 5 == 0)
		{
			printf(" FizzBuzz");
		}
		else if (a % 3 == 0)
		{
			printf(" Fizz");
		}
		else if (a % 5 == 0)
		{
			printf(" Buzz");
		}
		else
		{
			if (a != 1)
			printf(" ");
			printf("%d", a);
		}
		a++;
	}
	printf("\n");
	return (0);
}
