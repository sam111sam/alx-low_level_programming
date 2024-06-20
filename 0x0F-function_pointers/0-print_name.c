/**
 * print_name - print string using d/t func
 * @name: string
 * @f: function pointer
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (f)
		f(name);
}
