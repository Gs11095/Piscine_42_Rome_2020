/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsalvo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 14:10:41 by gsalvo            #+#    #+#             */
/*   Updated: 2020/10/31 17:57:47 by gsalvo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strupcase(char *str)
{
	int k;

	k = 0;
	while (str[k])
	{
		if (str[k] >= 97 && str[k] <= 122)
		{
			str[k] = str[k] - 32;
		}
		k++;
	}
	return (str);
}