#include "holberton.h"
/**
 * f_integer - function that prints an string
 * @char_list: arg to be print
 * Return: the lenght of the string
 */
int f_integer(va_list char_list)
{
long num = va_arg(char_list, int);
int len = 0;
if (num < 0)
{
_putchar('-');
num = -num;
len++;
}
len += print_integer(num);
return (len);
}
/**
 * print_integer - function that prints an string
 * @num: num to be print
 * Return: the lenght of the string in abs. value
 */
int print_integer(long num)
{
int len = 0;
if (num / 10)
{
len += print_integer(num / 10);
}
_putchar((num % 10) + '0');
len++;
return (len);
}