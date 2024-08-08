/**
 * set_bit - set bit value to 1
 * @n: ptr to num
 * @index: index to set to 1
 * Return: int
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > ((sizeof(*n) * 8) - 1))
		return (-1);
	*n = *n | (1 << index);
	return (1);
}
