#include "main.h"
#include <unistd.h>
/**
 * _printf - create printf.
 *@format: Format.
 *Return: count chars.
 */
int _printf(const char *format, ...)
{/*Local variables i, count and count_2 of type int are declared
   i is used as a counter to loop through the string
   format, count keeps the total count of characters printed and
   count_2 is used to keep track of
   characters printed by the format functions.
   */
	int i = 0;
	int	count = 0;
	int count_2;
	va_list args;
/*These lines of code check if the format argument meets certain
 conditions before processing the variable arguments. If format is NULL,
 if it starts with '%' followed by a null character, or if it starts with '%'
 followed by a white space and the next character is null,
 then -1 is returned to indicate an error
 */
	va_start(args, format);
	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);
/*This loop iterates through the format string and processes the characters one by one
If you encounter a '%' character followed by a valid format
calls a corresponding function and counts the characters printed
i find a normal character, print it and also count the characters
At the end, it returns the total number of characters printed or -1 in case of
mistake
*/
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
/*These lines of code end the use of the variable arguments and
 return the total number of characters printed by the _printf function.
 */
	va_end(args);
	return (count);
}
