#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * struct format - struct
 * @specifiers: struct format
 * @f: the function
 */

typedef struct op
{
	char op;
	int (*f)(va_list);
} op_t;

//prototipos, parametros y definicion de funciones//
int _printf(const char *format, ...); //prototipo de la tarea//
int get_function(char s, va_list args);
int _putchar(char c);

int printchar(va_list args);
int printstring(va_list args);
int printdigit(va_list args);
int printsign(va_list args);

#endif
