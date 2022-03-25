#include <stdio.h>
/**
 * main - entry point
 * Return: 0 on success
 */
int main(void)
{
	int num1 = 1;
	int num2 = 2;

	while (num2  <= 4000000)
	{
		int sum = 0;

		sum = num1 + num2;
		if (num2 % 2 == 0)
		{
		printf("%d", num2);
		}
		num1 = num2;
		num2 = sum;
		if (num2 % 2 == 0)
		{
			if (num2 <= 4000000)
			printf(", ");
		}
	}
	printf("\n");
	return (0);
}
