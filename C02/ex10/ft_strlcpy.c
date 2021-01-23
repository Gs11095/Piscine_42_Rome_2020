/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsalvo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 14:45:07 by gsalvo            #+#    #+#             */
/*   Updated: 2020/10/31 18:03:38 by gsalvo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int k;

	k = 0;
	while (src[k])
	{
		k++;
	}
	if (size == 0)
	{
		return (k);
	}
	k = 0;
	while (src[k] && k < size - 1)
	{
		dest[k] = src[k];
		k++;
	}
	dest[k] = '\0';
	k = 0;
	while (src[k])
	{
		k++;
	}
	return (k);
}
