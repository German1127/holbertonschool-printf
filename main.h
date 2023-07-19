/*este fragmento de código define un encabezado de archivo que evita la 
inclusión repetida y proporciona las declaraciones y bibliotecas necesarias
para su uso en otros archivos fuente del programa*/
#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * struct format - struct
 *@specifiers: struct format
 *@f: the function
 */
/*La línea de código define una estructura llamada op_t que tiene dos 
 miembros: op de tipo char y f de tipo puntero a una función que toma 
 un argumento va_list y devuelve un entero*/
typedef struct op
{
	char op;
	int (*f)(va_list);
} op_t;
/*esta declaración de función especifica la firma de la función _printf, 
 indicando que toma una cadena de formato y otros argumentos variables, 
 y devuelve un valor entero*/
int _printf(const char *format, ...);
/*esta declaración de función especifica la firma de la función get_function,
indicando que toma un carácter y un argumento de lista variable (va_list) 
y devuelve un valor entero*/
int get_function(char s, va_list args);
/*esta declaración de función especifica la firma de la función _putchar, 
 indicando que toma un carácter y devuelve un valor entero. La función 
 _putchar generalmente se utiliza para imprimir un solo carácter 
 en la salida estándar*/
int _putchar(char c);
/*esta declaración de función especifica la firma de la función printchar, 
 indicando que toma un argumento de lista variable (va_list) 
 y devuelve un valor entero. La función printchar se utiliza generalmente 
 para imprimir un carácter en la salida estándar*/
int printchar(va_list args);
/*esta declaración de función especifica la firma de la función printstring, 
 indicando que toma un argumento de lista variable (va_list) y devuelve un 
 valor entero. La función printstring se utiliza generalmente para imprimir 
 una cadena de caracteres en la salida estándar*/
int printstring(va_list args);
/*esta declaración de función especifica la firma de la función printdigit, 
 indicando que toma un argumento de lista variable (va_list) y devuelve un 
 valor entero. La función printdigit se utiliza generalmente para imprimir 
 un número entero en la salida estándar*/
int printdigit(va_list args);
/*esta declaración de función especifica la firma de la función printsign, 
 indicando que toma un argumento de lista variable (va_list) y devuelve un 
 valor entero. La función printsign se utiliza generalmente para imprimir el 
 símbolo "%" en la salida estándar*/
int printsign(va_list args);

#endif
