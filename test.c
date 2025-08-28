/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdamasce <rdamasce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 19:48:18 by youvisa           #+#    #+#             */
/*   Updated: 2025/08/27 21:15:12 by rdamasce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h>
#include <unistd.h>
#include <stdarg.h>

int soma(int qtd, ...) // recebe um argumento fixo e 
{
  va_list args; // Ela contém ponteiros e offsets para acessar os args sequencialmente
  va_start(args, qtd);

  

  int total = 0;
  int i = 0;
  while(i < qtd)
  {
    int num = va_arg(args, int);
    total += num;
    i++;
  }

  va_end(args);
  return total;
}

int main()
{
  printf("%d\n", soma(3, 1, 2, 3));
  return (0);
} */