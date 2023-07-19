#include "main.h"
#include <unistd.h>
/**
 * _printf - create printf.
 *@format: Format.
 *Return: count chars.
 */
int _printf(const char *format, ...)
{/*Se declaran variables locales i, count y count_2 de tipo int
   i se utiliza como un contador para recorrer la cadena
   format, count lleva la cuenta total de caracteres impresos y 
   count_2 se utiliza para llevar la cuenta de
   caracteres impresos por las funciones de formato.*/
	int i = 0;
	int	count = 0;
	int count_2;
	va_list args;
/*Estas líneas de código verifican si el argumento format cumple con ciertas
 condiciones antes de procesar los argumentos variables. Si format es NULL, 
 si comienza con '%' seguido de un carácter nulo, o si comienza con '%' 
 seguido de un espacio en blanco y el siguiente carácter es nulo, 
 entonces se devuelve -1 para indicar un error*/
	va_start(args, format);
	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);
/*Este bucle recorre la cadena format y procesa los caracteres uno por uno
Si encuentra un carácter '%' seguido de un formato válido
llama a una función correspondiente y cuenta los caracteres impresos
i encuentra un carácter normal, lo imprime y también cuenta los caracteres
Al final, devuelve el número total de caracteres impresos o -1 en caso de 
error*/
	while (format[i])
	{
		count_2 = 0;
		if (format[i] == '%')
		{
			if (!format[i + 1] || (format[i + 1] == ' ' && !format[i + 2]))
			{
				count = -1;
				break;
			}
			count_2 += get_function(format[i + 1], args);
			if (count_2 == 0)
				count += _putchar(format[i + 1]);
			if (count_2 == -1)
				count = -1;
			i++;
		}
		else
		{
			(count == -1) ? (_putchar(format[i])) : (count += _putchar(format[i]));
		}
		i++;
		if (count != -1)
			count += count_2;
	}
/*Estas líneas de código finalizan el uso de los argumentos variables y 
 devuelven el número total de caracteres impresos por la función _printf.*/
	va_end(args);
	return (count);
}
