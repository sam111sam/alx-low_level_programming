/**
 * clear_bit - set bit to 0
 * @n: ptr to num
 * @index: bit to set to 0
 * Return: 1(sucess) -1(fail)
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > (sizeof(*n) * 8 - 1))
		return (-1);
	*n = ~((~(*n)) | (1 << index));
	return (1);
}
