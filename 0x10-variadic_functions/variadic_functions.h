#ifndef VARIADIC_FUNCS
#define VARIADIC_FUNCS
#define FORMAT(f) ("%"#f)
typedef struct print_form{
{
	char *c;
	void (*f)();
} print_form_t;
void print_all(const char * const format, ...);
void print_strings(const char *separator, const unsigned int n, ...);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
#endif
