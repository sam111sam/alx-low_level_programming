#ifndef fun_p
#define fun_p
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
#endif /*fun_p */
