#ifndef _PEPASO_
#define _PEPASO_
#include <stdarg.h>
int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

void pepe_charo(char *separator, va_list args);
void pepe_into(char *separator, va_list args);
void pepe_floato(char *separator, va_list args);
void pepe_charto(char *separator, va_list args);

/**
 * struct coso - struct
 *
 * @id: type
 * @f: function pointer
 */
typedef struct coso
{
	char *id;
	void (*f)(char *separator, va_list args);
} pepin;

#endif
