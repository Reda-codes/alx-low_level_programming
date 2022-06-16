#include "main.h"
#include <string.h>
/* betty style doc for function main goes there */
/**
 * cap_string - function that capitalizes all words of a string.
 * @str: input string
 * Return: uppercase string
 */
char *cap_string(char *str)
{
	int i, j;
	char Separators[] = " \t\n,;.!?\"(){}";

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[0] >= 97 && str[0] <= 122)
			str[0] = str[0] - 32;
				for (j = 0; Separators[j] != '\0'; j++)
					if (str[i] == Separators[j] && s[i + 1] >= 97 && str[i + 1] <= 122)
						str[i + 1] = str[i + 1] - 32;
	}
	return (str);
}
