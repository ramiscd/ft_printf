/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdamasce <rdamasce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 22:13:30 by rdamasce          #+#    #+#             */
/*   Updated: 2025/09/02 20:51:24 by rdamasce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	check_args(const char format, va_list args)
{
	if (format == 'c')
		return (ft_print_char(va_arg(args, int)));
	if (format == 's')
		return (ft_print_string(va_arg(args, char *)));
	if (format == 'p')
		return (ft_print_ptr(va_arg(args, unsigned long)));
	if (format == 'd' || format == 'i')
		return (ft_print_nbr(va_arg(args, int)));
	if (format == 'u')
		return (ft_print_uns(va_arg(args, unsigned int)));
	if (format == 'x' || format == 'X')
		return (ft_print_hex(va_arg(args, unsigned int), format));
	if (format == '%')
		return (ft_print_char('%'));
	return (0);
}

int	ft_printf(const char *format, ...)
{
	int		j;
	int		count;
	va_list	args;

	va_start(args, format);
	j = 0;
	count = 0;
	while (format[j] != '\0')
	{
		if (format[j] == '%' && format[j + 1])
		{
			count += check_args(format[j + 1], args);
			j++;
		}
		else
		{
			count += ft_print_char(format[j]);
		}
		j++;
	}
	va_end(args);
	return (count);
}
