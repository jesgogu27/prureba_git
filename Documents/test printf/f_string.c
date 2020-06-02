#include "holberton.h"
/**
 * f_string - function that prints an string
 * @char_list: string to be print
 * Return: the lenght of the string
 */
int f_string(va_list char_list)
{
int i = 0;
char *str = va_arg(char_list, char*);

if (str == NULL)
str = "(null)";
for ( ; str[i] != '\0'; i++)
{
_putchar(str[i]);
}
return (i);
}


