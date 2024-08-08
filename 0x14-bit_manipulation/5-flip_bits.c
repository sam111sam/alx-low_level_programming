/**
 * int flip_bits - num of flip to make them same
 * @n: num 1
 * @m: num 2
 * Return: no flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int temp;
	unsigned int count = 0;

	temp = n ^ m;

	while (temp)
	{
		count += temp & 1;
		temp >>= 1;
	}
	return (count);
}
