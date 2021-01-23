/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsalvo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 17:26:05 by gsalvo            #+#    #+#             */
/*   Updated: 2020/11/03 17:28:46 by gsalvo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_numeric(char *str)
{
	int k;

	k = 0;
	while (str[k])
	{
		if (str[k] < 48 || str[k] > 57)
		{
			return (0);
		}
		k++;
	}
	return (1);
}
