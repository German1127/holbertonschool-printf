#ifndef MAIN_H
#define MAIN_H

//librerias//

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
/**
 *
 */

//esta funcion devuelve salida estandar//
typedef struct op
{
	char op;
	int (*f)(va_list);
			
} op_t;

//prototipo//

int _printf(const char *format, ...);

//prot _putchar//

int _putchar(char c);

#endif
