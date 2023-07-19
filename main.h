#ifndef MAIN_H//crea un bloque de inclusión condicional//
#define MAIN_H//crea un bloque de inclusión condicional//

//librerias//

#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * struct op - the struct
 * @op: the operator
 * @p: the function
 */
//Este fragmento de código define una estructura llamada op//
//utilizando la palabra clave typedef, y luego define un nuevo tipo de dato//
//llamado op_t que representa a esa estructura//
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
#endif//#endif se coloca al final del bloque de inclusión condicional//
