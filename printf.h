/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdamasce <rdamasce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 19:20:12 by rdamasce          #+#    #+#             */
/*   Updated: 2025/08/28 21:25:18 by rdamasce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
#define PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <unistd.h>
 #include <stdint.h>

void	ft_print_char(char c);
void	ft_print_ptr(void *ptr);
int		ft_printf(const char* format_string, ...);
void	ft_print_string(const char *c);

# endif