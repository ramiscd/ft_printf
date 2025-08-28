/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdamasce <rdamasce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/27 21:47:34 by rdamasce          #+#    #+#             */
/*   Updated: 2025/08/27 22:11:59 by rdamasce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void ft_print_ptr(char *ptr)
{
	int i;

	i = 0;
	while (&ptr[i] != (void *)0)
	{
		write(1, &ptr[i],1);
		i++;
	}
}

int main(void)
{
	char *ptr;
	ft_print_ptr(ptr);
	return 0;
}