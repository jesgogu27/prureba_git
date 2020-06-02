#include "holberton.h"
/**
 * f_character - function that prints a character
 * @char_list: character to be print
 * Return: always one
 */
int f_character(va_list char_list)
{
int i = 1;

_putchar(va_arg(char_list, int));
return (i);
}
