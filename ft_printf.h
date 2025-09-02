/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdamasce <rdamasce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 19:20:12 by rdamasce          #+#    #+#             */
/*   Updated: 2025/09/02 19:51:17 by rdamasce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <stdint.h>

int		ft_printf(const char *format_string, ...);
int		ft_print_char(int c);
int		ft_print_ptr(unsigned long ptr);
int		ft_print_string(char *c);
int		ft_print_nbr(int n);
int		ft_print_hex(unsigned long n, char format);
int		ft_print_uns(unsigned int n);

#endif