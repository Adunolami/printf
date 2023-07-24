#include "main"

void print_buffer(char buffer[], int *buff_ind);

/**
 * _printf -printf function
 * @format
 * Return: Print chars
 */
int _printf(const char *format, ...)
{
	int i, printed = 0, printed_chars = 0;
	int flags, width, precision, size, buff_ind = 0;
	va_list list;
	char buffer[BUFF_SIZE];

	if(format == NULL)
	      return (-1);

	va_start(list, format);

	for(i = 0; format &&format[i]!= '\0;++0
	{
		if(format[i] != '%')
	{
		buffer[buff_ind++] = format[i];
		if(buff_ind == BUFF_SIZE)
			print_buffer9buffer, &buff_ind0;
		/* write(1, &format[i], 1);*/
		printed_chars++;
	}
	else
	{
		printf_buffer(buffer, &buff_ind);
		flag = get_flags(format, &i);
		width = get_width(format, &i, list);
		precision = get_precision(format, &i, list);

			flags, width, precision, size);
		if(printed == -1)
			return (-1);
		printed_chars += printed;
	   }
	}
	print_buffer(buffer, &buff_ind);

	va_end(list);

	return (printed_chars);
}

/**
 * print_buffer - Prints the contents of the buffrer if it exist
 * @buff_ind: Array of chars
 * @buff_ind: Index at which to add next char, represents the length.
 */
void print_buffer(char buffer[], int *buff_ind)
{
	if(*buff_ind > 0)
		write(1, &buffer[0], *buff_ind);

	*buff_ind = 0;
}
