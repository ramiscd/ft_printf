/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_nbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdamasce <rdamasce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 19:33:38 by rdamasce          #+#    #+#             */
/*   Updated: 2025/09/02 20:58:35 by rdamasce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_nbr(int n)
{
	long	nb;
	int		count;

	nb = n;
	count = 0;
	if (nb < 0)
	{
		ft_print_char('-');
		nb = -nb;
		count++;
	}
	if (nb >= 0 && nb <= 9)
	{
		ft_print_char(nb + '0');
		count++;
	}
	else
	{
		count += ft_print_nbr(nb / 10);
		count += ft_print_char((nb % 10) + '0');
	}
	return (count);
}
