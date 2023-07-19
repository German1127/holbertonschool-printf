#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 *main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int len;
	int len2;
/*imprime una cadena de texto y asigna el número de caracteres 
 impresos a la variable len utilizando la función _printf*/
	len = _printf("Let's try to printf a simple sentence.\n");
/*imprime una cadena de texto y asigna el número de caracteres impresos 
 a la variable len2 utilizando la función printf*/
	len2 = printf("Let's try to printf a simple sentence.\n");
/*imprime dos veces el valor de la variable len en la cadena de formato 
"Length:[x, y]\n" utilizando la función _printf*/
	_printf("Length:[%d, %i]\n", len, len);
/*mprime dos veces el valor de la variable len2 en la cadena de formato 
 "Length:[x, y]\n" utilizando la función printf.*/
	printf("Length:[%d, %i]\n", len2, len2);
/*imprime el número negativo -762534 en la cadena de formato 
 "Negative:[x]\n" utilizando la función _printf*/
	_printf("Negative:[%d]\n", -762534);
/*imprime el número negativo -762534 en la cadena de formato 
 "Negative:[x]\n" utilizando la función _printf*/
	printf("Negative:[%d]\n", -762534);
/*imprime el carácter 'H' en la cadena de formato "Character:[x]\n" 
 utilizando la función _printf*/
	_printf("Character:[%c]\n", 'H');
/*imprime el carácter 'H' en la cadena de formato "Character:[x]\n" 
 utilizando la función printf*/
	printf("Character:[%c]\n", 'H');
/*imprime la cadena de texto "I am a string !" en la cadena de formato 
 * "String:[x]\n" utilizando la función _printf*/
	_printf("String:[%s]\n", "I am a string !");
/* imprime la cadena de texto "I am a string !" utilizando la función printf*/
	printf("String:[%s]\n", "I am a string !");
/*La línea de código len = _printf("Percent:[%%]\n"); imprime el símbolo '%'
 utilizando la función _printf y asigna el número de caracteres 
 impresos a la variable len*/
	len = _printf("Percent:[%%]\n");
/*imprime el símbolo '%' utilizando la función printf y asigna el número de
 caracteres impresos a la variable len2.*/
	len2 = printf("Percent:[%%]\n");
/*imprime el valor de la variable len en la cadena de formato "Len:[x]\n" 
 utilizando la función _printf*/
	_printf("Len:[%d]\n", len);
/*imprime el valor de la variable len2 en la cadena de formato "Len:[x]\n"
 utilizando la función printf*/
	printf("Len:[%d]\n", len2);
	return (0);
}
