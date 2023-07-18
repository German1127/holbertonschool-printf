#ifndef main_h
#define main_h

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
/**
 *
 */
typedef struct op
{
	char op;
	int (*f)(va_list);
			
} op_t;

int _printf(const char *format, ...);
int _putchar(char c);

#endif
