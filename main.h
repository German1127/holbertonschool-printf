#ifndef MAIN_H//crea un bloque de inclusión condicional//
#define MAIN_H//crea un bloque de inclusión condicional//

//librerias//

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * struct op - the struct
 * @op: the operator
 * @p: the function
 */
//esta funcion devuelve salida estandar//
typedef struct op
{
	char op;
	int (*f)(va_list);
			
} op_t;

//prototipos, parametros y definicion de funciones//
int _printf(const char *format, ...); //prototipo de la tarea//
int (*get_op_func(char))(va_list); //define get_op_func com. func. tipo char//
int printChar(va_list);//fucion que toma parametro tipo list y devuelve int//
int printString(va_list);//toma un param tipo list y devuelve un entero int//
int printNum(va_list);//f. que toma un p. de tipo list y devuelve un int//
int printSign(va_list);//f. que toma un p. de tipo list y devuelve un int//
int _putchar(char c);//f. que toma un p. de tipo char y devuelve un int//
int putstring(char *str);//f. que toma un p. de tipo char y devuelve un int//
int putNum(unsigned long int n, int base, char *digits);
int printBI(va_list arg);//f. que toma un p. de tipo list y devuelve un int//

#endif//#endif se coloca al final del bloque de inclusión condicional//
