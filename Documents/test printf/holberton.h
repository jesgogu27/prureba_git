#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

//PROTOTIPOS DE FUNCIONES

int _putchar(char c); 
int _printf(const char *format, ...);
int f_character(va_list char_list);
int f_string(va_list char_list);
/**
 * struct call_function - character and function
 * @sp_char: character that specifies the
 * format of the variable that will be printed.
 * @f: function that returns the variable in a
 * string with the new format.
 *
 * Description: match the char with the function
 */
typedef struct call_function
{
char *sp_char; /*PARAMETRO QUE RECIBO*/ 
int (*f)(); /* FUNCION A LA QUE LLAMO */
} c_f; /* TIPO DE DATO */

#endif
