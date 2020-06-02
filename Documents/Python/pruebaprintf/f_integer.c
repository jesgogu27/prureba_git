#include "holberton.h"

int f_integer(va_list char_list)
{
	int i = 0;
	char *str= va_arg(char_list, char*);

	if(str == NULL)
	{
		str= "(NULL)";
	}

	for(;str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	return (i);
}