#include "holberton.h"
/**
 * pr_di - Signed decimal integer
 *
 * @arg: arguments
 * Return: 0
 */
int pr_di(va_list arg) /*if (*p == 'd' || *p == 'i')*/
{
	int i;
	char buffer[1024];

	i = va_arg(arg, int);
	_itoa(i, buffer, 10);              /*here 10 means decimal*/
	write(1, buffer, strlen(buffer)); /*strlen: long of buffer*/
	return (0);
}
/**
 * pr_ui - Unsigned decimal integer
 *
 * @arg: argyments
 * Return: 0
 */
int pr_ui(va_list arg) /*if (*p == 'u')*/
{
	int i;
	char buffer[1024];

	i = va_arg(arg, int);
	if (i <= -1)
		i = i * (-1);
	_itoa(i, buffer, 10);
	write(1, buffer, strlen(buffer));
	return (0);
}
/**
 * pr_o - Signed octal
 *
 * @arg: arguments
 * Return: 0
 */
int pr_o(va_list arg) /*if (*p == 'o')*/
{
	int i;
	char buffer[1024];

	i = va_arg(arg, int);
	_itoa(i, buffer, 8); /*converts integer 10 to octal*/
	write(1, buffer, strlen(buffer));
	return (0);
}
