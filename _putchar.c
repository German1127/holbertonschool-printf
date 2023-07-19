/*define una función llamada _putchar que imprime un carácter en la*/ 
/* salida estándar */
#include "main.h"
#include <unistd.h>
/**
 * _putchar - print character
 * @c: character print
 * Return: character
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
