/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdamasce <rdamasce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/27 21:47:34 by rdamasce          #+#    #+#             */
/*   Updated: 2025/08/28 20:23:33 by rdamasce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	ft_print_ptr(void *ptr)
{
	int i;

	i = 0;
	while (&ptr[i] != (void *)0)
	{
		write(1, &ptr[i],1);
		i++;
	}
}

/* int main(void)
{
	char *ptr;
	ft_print_ptr(ptr);
	return 0;
} */