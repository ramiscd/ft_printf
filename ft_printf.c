/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdamasce <rdamasce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 22:13:30 by rdamasce          #+#    #+#             */
/*   Updated: 2025/08/26 20:55:35 by rdamasce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_print_string(const char *c);
void	ft_print_char(char c);

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
				c = va_arg(args, int);
				ft_print_string(c);
			}
			// else if para diferentes formatos
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

int main(void)
{
	const char* format_string = "primerira letra: %c, segunda letra %c, primeira palavra %s";
	char str[] = "palavra";
	char a = 'a';
	int b = 'b';
	ft_printf(format_string, a, b, str);
	return (0);
}