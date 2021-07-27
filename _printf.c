#include "holberton.h"
/**
 * _printf - function print to the string with parameters
 *
 * @format: arguments
 * Return: counter
 */
int _printf(const char *format, ...)
{
	va_list arg;
	int i;
	int count_char; /*count the amount of chars*/
	const char *p;
	char buffer[1024];
	char *s;

	op_t print[] = {
		{'c', pr_char}, {'s', pr_string}, {'%', pr_perc},
		{'d', pr_di}, {'i', pr_di}, {'u', pr_ui},
		{'o', pr_o}, {'x', pr_x}, {'X', pr_X}};

	va_start(arg, format);
	for (p = format; *p != '\0'; p++) /*p points to format address*/
	{
		if (*p != '%')
		{
			write(1, p, 1);
			count_char++;
		}
		else
		{
			p++;
			int i = 0;

			while (i < 9)
			{
				if (*p == print[i].op)
					count_char = count_char + print[i].f(arg);
				i++;
			}
		}
	}
	return (count_char);
}
