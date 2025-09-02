/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdamasce <rdamasce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 22:13:30 by rdamasce          #+#    #+#             */
/*   Updated: 2025/09/02 19:51:50 by rdamasce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format_string, ...)
{
	int		j;
	va_list	args;

	va_start(args, format_string);
	j = 0;
	while (format_string[j] != '\0')
	{
		if (format_string[j] == '%')
		{
			j++;
			if (format_string[j] == 'c')
				return (ft_print_char(va_arg(args, int)));
			if (format_string[j] == 's')
				return (ft_print_string(va_arg(args, char *)));
			if (format_string[j] == 'p')
				return (ft_print_ptr(va_arg(args, unsigned long)));
			if (format_string[j] == 'd' || format_string[j] == 'i')
				return (ft_print_nbr(va_arg(args, int)));
			if (format_string[j] == 'u')
				return (ft_print_uns(va_arg(args, unsigned int)));
			if (format_string[j] == 'x' || format_string[j] == 'X')
				return (ft_print_hex(va_arg(args, unsigned int), format_string[j]));
			if (format_string[j] == '%')
				return (ft_print_char('%'));
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
	const char* format_string = "primerira letra: %c,
	segunda letra %c, primeira palavra %s, ponteiro: %p";
	char str[] = "palavra";
	char a = 'a';
	int b = 'b';
	char *ptr;
	ft_printf(format_string, a, b, str, ptr);
	return (0);
} */