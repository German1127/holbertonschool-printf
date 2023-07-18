#include "main.h"//llama al main.h//
/**
 * get_op_func - gets a function
 * @s: the operator
 * Return: Pointer to one of the functions
 */
int (*get_op_func(char s))(va_list)
{
	//esta expresión inicializa el arreglo ops con una serie//
	//de valores numéricos y funciones asociadas//
	//Cada valor numérico representa un tipo de operación y está asociado//
	//a una función específica que se utilizará para realizar esa operación//
	op_t ops[] = {
		{'c', printChar},//v. num de 10 y una función llamada printChar//
		{'s', printString},//v. num de 11 y una función llamada printString//
		{'%', printSign},//v. num de 12 y una función llamada printSign//
		{'d', printNum},//v. num de 13 y una función llamada printNum//
		{'i', printNum},//v. num de 14 y una función llamada printNum//
	};

	size_t i;//declara una variable llamada i con el tipo size_t//

	for (i = 0; i < sizeof(ops) / sizeof(op_t); i++)
	{
		if (ops[i].op == s)
			return (ops[i].f);
	}
	return (NULL);
}
