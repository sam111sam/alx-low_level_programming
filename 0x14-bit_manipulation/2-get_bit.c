/**
 * get_bit - get bit value at index
 * @n: num in binary
 * @index: index 0(lsb ...
 * Return: int
 */
int get_bit(unsigned long int n, unsigned int index)
{
	return ((n >> index) & 1);
}
