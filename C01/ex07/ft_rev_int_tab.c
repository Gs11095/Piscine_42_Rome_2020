/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltortora <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 15:47:47 by ltortora          #+#    #+#             */
/*   Updated: 2020/10/28 17:19:55 by ltortora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int i;
	int j;

	i = 0;
	while (i < size / 2)
	{
		j = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = j;
		i++;
	}
}
