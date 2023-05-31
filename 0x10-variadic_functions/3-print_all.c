#include "variadic_functions.h"

void print_all(const char * const format, ...)
{
	va_list arguments;
	unsigned int i = 0;
	char *str, *sep = "";

	va_start(arguments, format);

	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", sep, va_arg(arguments, int));
				break;
			case 'i':
				printf("%s%d", sep, va_arg(arguments, int));
				break;
			case 'f':
				printf("%s%f", sep, va_arg(arguments, double));
				break;
			case 's':
				str = va_arg(arguments, char *);
				if (!str)
					str = "(nil)";
				printf("%s%s", sep, str);
				break;
			default:
				i++;
				continue;
		}
		sep = ", ";
		i++;
	}
	printf("\n");
	va_end(arguments);
}
