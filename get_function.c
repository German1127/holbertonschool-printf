#include "main.h"

/**
 *get_function - function.
 * @t_step: conversion specifiers.
 * @args: arguments.
 * Return: char count.
 */

/*
The get_function function finds and executes the print function
corresponding to the format type specified by t_step. Return the
number of characters printed by the format function or 0 if not
find a corresponding function. It is used in conjunction with the function
printf to process specific formats
*/
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
/*
The code looks in the step structure for a print function
corresponding to the format type t_step. If you find a match
call that function and add the result to the counter count
If it doesn't find a corresponding function, it prints the characters '%'
and t_step and also counts them. At the end, it returns the total number of
printed characters
*/
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

/*
The printdigit function processes a digit received as a variable argument.
and prints it as part of the print format. returns the number
of printed characters. It is used in conjunction with the function
_printf to print specific digits
*/
int printdigit(va_list args)
{
	int decimal = 1;
	int count = 0;
	long int digit = va_arg(args, int);
	long int digit2;
/*
The printdigit function prints a digit as part of the print format.
If the digit is negative, a '-' sign is printed and converted to
positive. Then iterates through the digit and prints the digits
individually. At the end, the number of characters printed is returned
*/
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

/*
The printsign function prints the character '%' and returns 1. It is used in
set with function _printf to print the sign '%'
verbatim in print format
*/
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
/*
The printstring function prints a received character string as a
variable argument and returns the number of characters printed.
If the string is null, the string "(null)" is printed. If the chain is
empty, returns -1. It is used in conjunction with the _printf function to
print specific character strings
*/
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
