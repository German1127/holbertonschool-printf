#include "main.h"

/**
 *get_function - function.
 * @t_step: conversion specifiers.
 * @args: arguments.
 * Return: char count.
 */
/*La función get_function busca y ejecuta la función de impresión 
 correspondiente al tipo de formato especificado por t_step. Devuelve el 
 número de caracteres impresos por la función de formato o 0 si no se 
 encuentra una función correspondiente. Se utiliza en conjunto con la función
 printf para procesar formatos específicos*/
int get_function(char t_step, va_list args)
{
	int i = 0;
	int count = 0;

	op_t step[] = {
		{'c', printchar},
		{'s', printstring},
		{'%', printsign},
		{'d', printdigit},
		{'i', printdigit},
		{0, NULL}
	};
/*El código busca en la estructura step una función de impresión 
 correspondiente al tipo de formato t_step. Si encuentra una coincidencia
  llama a esa función y suma el resultado al contador count
  Si no encuentra una función correspondiente, imprime los caracteres '%'
  y t_step y también los cuenta. Al final, devuelve el número total de 
  caracteres impresos*/
	while (step[i].op)
	{
		if (t_step == step[i].op)
			count += step[i].f(args);
		i++;
	}

	if (count == 0)
	{
		count += _putchar('%');
		count += _putchar(t_step);
	}

	return (count);
}

#include "main.h"
#include <unistd.h>

/**
 *printchar - print char
 *@args: argument.
 *Return: count chars.
 */

int printchar(va_list args)
{
	char c = va_arg(args, int);

	_putchar(c);

	return (1);
}

#include "main.h"
#include <unistd.h>

/**
 * printdigit - print integers.
 * @args: argument.
 * Return: count chars.
 */

/*La función printdigit procesa un dígito recibido como argumento variable 
 y lo imprime como parte del formato de impresión. Devuelve el número 
 de caracteres impresos. Se utiliza en conjunto con la función 
 _printf para imprimir dígitos específicos*/
int printdigit(va_list args)
{
	int decimal = 1;
	int count = 0;
	long int digit = va_arg(args, int);
	long int digit2;
/*La función printdigit imprime un dígito como parte del formato de impresión. 
 Si el dígito es negativo, se imprime un signo '-' y se convierte a 
 positivo. Luego, se itera a través del dígito y se imprimen los dígitos 
 individualmente. Al final, se devuelve el número de caracteres impresos*/
	if (digit < 0)
	{
		count += _putchar('-');
		digit *= -1;
	}

	if (digit < 10)
		return (count += _putchar(digit + '0'));

	digit2 = digit;

	while (digit2 > 9)
	{
		decimal *= 10;
		digit2 /= 10;
	}
	while (decimal >= 1)
	{
		count += _putchar(((digit / decimal) % 10) + '0');
		decimal /= 10;
	}

	return (count);
}

#include "main.h"
#include <unistd.h>

/**
 * printsign - print sign.
 * @args: arguments.
 * Return: count chars.
 */
/*La función printsign imprime el carácter '%' y devuelve 1. Se utiliza en 
 conjunto con la función _printf para imprimir el signo '%' 
 literal en el formato de impresión*/
int printsign(va_list args)
{
	(void)args;

	_putchar('%');

	return (1);
}

#include "main.h"
#include <unistd.h>
#include <stdarg.h>

/**
 * printstring - print string.
 * @args: argument.
 * Return: character count.
 */
/*La función printstring imprime una cadena de caracteres recibida como a
 rgumento variable y devuelve el número de caracteres impresos. 
 Si la cadena es nula, se imprime la cadena "(null)". Si la cadena está 
 vacía, devuelve -1. Se utiliza en conjunto con la función _printf para 
 imprimir cadenas de caracteres específicas*/
int printstring(va_list args)
{
	int i;
	int count = 0;
	char *str = va_arg(args, char *);

	if (!str)
		str = "(null)";

	if (str[0] == '\0')
		return (-1);

	for (i = 0; str[i] != '\0'; i++)
		count += _putchar(str[i]);

	return (count);
}
