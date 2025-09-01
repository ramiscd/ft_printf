/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_nbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdamasce <rdamasce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 19:33:38 by rdamasce          #+#    #+#             */
/*   Updated: 2025/09/01 20:13:25 by rdamasce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	ft_print_nbr(int n)
{
	long	nb;

	nb = n;
	if (nb < 0)
	{
		ft_print_char('-');
		nb = -nb;
	}
	if (nb >= 0 && nb <= 9)
		ft_print_char(nb + '0');
	else
	{
		ft_print_nbr(nb / 10);
		ft_print_char((nb % 10) + '0');
	}
}

int	main(void)
{
	ft_print_nbr(123);
	return (0);
}
