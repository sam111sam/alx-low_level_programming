/**
 * _islower - check for lowercase character bry returning int
 *@c: the character to be checked
 *
 * Return: on success 1
 */
int _islower(int c)/*Return: 1 || 0*/
{
	int b = 1;
	char a = 'a';
while (b <= 26)
{
	a = 'a';
while (a <= 'z')
{
if (c == a++)
	return (1);
}
	b++;
}
	return (0);
}
