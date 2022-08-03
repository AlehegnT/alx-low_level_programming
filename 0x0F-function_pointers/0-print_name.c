/**
 * print_name - Print name
 * @name: Name to print
 * @f: Pointer to void function, taking a char * as arg
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
