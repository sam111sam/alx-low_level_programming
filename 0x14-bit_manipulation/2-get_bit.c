/**
 * get_bit - get bit value at index
 * @n: num in binary
 * @index: index 0(lsb ...
 * Return: int
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > (sizeof(n) * 8 - 1))
		return (-1);
	return ((n >> index) & 1);
}
