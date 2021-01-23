/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsalvo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 16:53:35 by gsalvo            #+#    #+#             */
/*   Updated: 2020/11/04 12:57:47 by gsalvo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int k;

	k = 0;
	while (k < n)
	{
		if (s1[k] > s2[k])
		{
			return (s1[k] - s2[k]);
		}
		if (s1[k] < s2[k])
		{
			return (s1[k] - s2[k]);
		}
		if (s1[k] == '\0' && s2[k] == '\0')
		{
			return (0);
		}
		k++;
	}
	return (0);
}
