/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdamasce <rdamasce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/27 21:47:34 by rdamasce          #+#    #+#             */
/*   Updated: 2025/08/28 21:40:32 by rdamasce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief Prints the value of a pointer in hexadecimal format to stdout.
 *
 * This function casts the given pointer (`void *`) to an unsigned integer type 
 * (`uintptr_t`) large enough to hold memory addresses. It then converts that 
 * numeric value into a hexadecimal string representation, prefixed with "0x", 
 * similar to the `%p` specifier in the standard printf function.
 *
 * @param ptr Pointer to be printed. If NULL, the output will be "0x0".
 */
#include "printf.h"

/* void	ft_print_char(char c)
{
	write(1, &c, 1);
} */

void	ft_print_ptr(void *ptr)
{
	uintptr_t addr = (uintptr_t)ptr;
	const char *hex = "0123456789abcdef";
	char buf[2 * sizeof(uintptr_t) + 1];
	int i = 0;
	write(1, "0x", 2);
	if (addr == 0)
	{
		ft_print_char('0');
		return ;
	}
	while (addr != 0)
	{
		buf[i] = hex[addr % 16];
		addr = addr / 16;
		i++;
	}
	while (i > 0)
	{
		i--;
		ft_print_char(buf[i]);
	}
}

int main(void)
{
    int x = 42;
    char *s = "ola mundo";

    ft_print_ptr(&x);
    write(1, "\n", 1);
    ft_print_ptr(s);
    write(1, "\n", 1);
    ft_print_ptr(NULL);
    write(1, "\n", 1);

    return 0;
}