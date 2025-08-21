/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdamasce <rdamasce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 22:13:30 by rdamasce          #+#    #+#             */
/*   Updated: 2025/08/20 22:58:23 by rdamasce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_printf(const char* format_string, ...)
{
	int count_args;
	int i;
	va_list args;

	count_args = 0;
	i = 0;
	while (format_string[i])
	{
		if(format_string[i] == '%')
			count_args++;
		i++;
	}
	printf("count_args: %d\n", count_args);

	va_start(args, format_string);

	i = 0;
	while (i < count_args)
	{
		int num = va_arg(args, int);
		printf("%d", num);
		i++;
	}
	printf("%s", format_string);
	return (0);
}

int main(void)
{
	const char* format_string = "valor de i: %d, valor de j %d";
	int i = 5;
	int j = 6;
	ft_printf(format_string, i, j);
	return (0);
}