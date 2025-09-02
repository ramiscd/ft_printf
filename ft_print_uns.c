/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_uns.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdamasce <rdamasce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 19:22:12 by rdamasce          #+#    #+#             */
/*   Updated: 2025/09/02 19:36:09 by rdamasce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_uns(unsigned int n)
{
	int	count;

	count = 0;
	if (n >= 10)
		count += ft_print_uns(n / 10);
	count += ft_print_char((n % 10) + '0');
	return (count);
}
