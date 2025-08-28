/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdamasce <rdamasce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 22:13:30 by rdamasce          #+#    #+#             */
/*   Updated: 2025/08/28 20:24:05 by rdamasce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_printf(const char* format_string, ...)
{
	int		j;
	char	c;
	va_list	args;

	va_start(args, format_string);

	j = 0;
	while (format_string[j] != '\0')
	{
		if (format_string[j] == '%')
		{
			j++;
			if (format_string[j] == 'c')
			{
				c = va_arg(args, int);
				ft_print_char(c);
			}
			else if (format_string[j] == 's')
			{
				char *str = va_arg(args, char *);
				ft_print_string(str);
			}
			else if (format_string[j] == 'p')
			{
				char *ptr = va_arg(args, void *);
				ft_print_ptr(ptr);
			}
			else if (format_string[j] == 'd')
			{
			}
			else if (format_string[j] == 'i')
			{
			}
			else if (format_string[j] == 'u')
			{
			}
			else if (format_string[j] == 'x')
			{
			}
			else if (format_string[j] == 'X')
			{
			}
			else
			{
				ft_print_char('%');
			}
		}
		else
		{
			write(1, &format_string[j], 1);
		}
		j++;
	}
	va_end(args);
	return (0);
}

/* int main(void)
{
	const char* format_string = "primerira letra: %c, segunda letra %c, primeira palavra %s, ponteiro: %p";
	char str[] = "palavra";
	char a = 'a';
	int b = 'b';
	char *ptr;
	ft_printf(format_string, a, b, str, ptr);
	return (0);
} */