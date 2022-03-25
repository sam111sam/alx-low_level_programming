#include <stdio.h>
/**
 * main - entry point
 * Return: 0 on success
 */
int main(void)
{
	long int num1 = 1;
	long int num2 = 2;
	int a = 1;

	printf("%ld, ", num1);
	while (a <= 49)
	{
		long int sum = 0;

		sum = num1 + num2;
		printf("%ld", num2);
		if (a != 49)
			printf(", ");
		num1 = num2;
		num2 = sum;
		a++;
	}
	printf("\n");
	return (0);
}
