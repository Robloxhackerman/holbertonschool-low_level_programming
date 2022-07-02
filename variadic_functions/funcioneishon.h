#include <stdarg.h>
#include <stdio.h>

void pepe_charo(char *separator, va_list args)
{
	printf("%s%s", separator, va_arg(args, int));
}

void pepe_into(char *separator, va_list args)
{
	printf("%s%d", separator, va_arg(args, int));
}

void pepe_floato(char *separator, va_list args)
{
	printf("%s%f", separator, va_arg(args, double));
}

void pepe_charto(char *separator, va_list args)
{
	char *arg;
	
	va_arg(args, char *);
	
	if (arg == NULL)
	{
		printf("%s%s", separator, "(nil)");
		return;
	}
	else
	{
		printf("%s%s", separator, arg);
	}
}
