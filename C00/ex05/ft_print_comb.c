/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsalvo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/26 11:06:50 by gsalvo            #+#    #+#             */
/*   Updated: 2020/11/11 19:33:41 by gsalvo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	char primo;
	char secondo;
	char terzo;

	primo = '0' - 1;
	while (++primo <= '9')
	{
		secondo = primo;
		while (++secondo <= '9')
		{
			terzo = secondo + 1;
			while (terzo <= '9')
			{
				ft_putchar(primo);
				ft_putchar(secondo);
				ft_putchar(terzo);
				if (primo != '7' || secondo != '8' || terzo != '9')
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
				terzo++;
			}
		}
	}
}
