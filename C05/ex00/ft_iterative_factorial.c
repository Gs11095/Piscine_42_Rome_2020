/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsalvo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 16:43:09 by gsalvo            #+#    #+#             */
/*   Updated: 2020/11/05 13:29:19 by gsalvo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int fac;

	fac = 1;
	if (nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	else
	{
		while (nb > 0)
		{
			fac = fac * nb;
			nb--;
		}
		return (fac);
	}
}
