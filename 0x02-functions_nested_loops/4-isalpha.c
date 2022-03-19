/**
 * _isalpha - check for lowercase character bry returning int
 *@c: the character to be checked
 *
 * Return: on success 1
 */
int _isalpha(int c)/*Return: 1 || 0*/
{
	int b = 1;
	char a = 'a';
	char d = 'A';
while (b <= 26)
{
	a = 'a';
	d = 'A';
while (a <= 'z' && d <= 'Z')
{
if (c == a++ || c == d++)
	return (1);
}
	b++;
}
	return (0);
}
