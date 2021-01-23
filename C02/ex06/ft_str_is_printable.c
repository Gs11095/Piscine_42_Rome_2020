/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsalvo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 20:39:16 by gsalvo            #+#    #+#             */
/*   Updated: 2020/11/03 17:23:35 by gsalvo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_printable(char *str)
{
	int k;

	k = 0;
	while (str[k])
	{
		if (str[k] <= 31 || str[k] == 127)
		{
			return (0);
		}
		k++;
	}
	return (1);
}
