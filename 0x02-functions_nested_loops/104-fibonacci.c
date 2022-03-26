#include <stdio.h>
#include <stdint.h>
/**
 * main - entry point
 * Return: 0 on success
 */
int main(void)
{
	uint64_t num1 = 1;
	uint64_t num2 = 2;
	int a = 1;

	printf("%lu, ", num1);
	while (a <= 97)
	{
		uint64_t sum = 0;

		sum = num1 + num2;
		printf("%lu",  num2);
		if (a != 97)
			printf(", ");
		num1 = num2;
		num2 =  sum;
		a++;
	}
	printf("\n");
	return (0);
}
