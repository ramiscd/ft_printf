/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_string.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdamasce <rdamasce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 19:39:02 by rdamasce          #+#    #+#             */
/*   Updated: 2025/09/02 19:47:30 by rdamasce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_string(char *c)
{
	int	i;

	i = 0;
	if (!c)
		return (ft_print_string("(null)"));
	while (c[i] != '\0')
	{
		write(1, &c[i], 1);
		i++;
	}
	return (i);
}
