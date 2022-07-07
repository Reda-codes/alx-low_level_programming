#include <stdio.h>
#include <stdarg.h>

/**
 * print_all -  function that prints anything.
 * @format: list of types of arguments passed to the function
 * Return: prints arguments separated by a comma
 * if string is NULL, print (nil) instead
 */
void print_all(const char * const format, ...)
{
	va_list list;
	int i = 0;
	int status;
	char *string;

	va_start(list, format);
	while (format && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(list, int));
				status = 0;
				break;
			case 'i':
				printf("%i", va_arg(list, int));
				status = 0;
				break;
			case 'f':
				printf("%f", va_arg(list, double));
				status = 0;
				break;
			case 's':
				string = va_arg(list, char*);
				if (string == NULL)
					string = "(nil)";
				printf("%s", string);
				status = 0;
				break;
			default:
				status = 1;
				break;
		}
		if (format[i + 1] != '\0' && status == 0)
			printf(", ");
		i++;
	}
	printf("\n");
}
