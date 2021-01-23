/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsalvo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 16:18:03 by gsalvo            #+#    #+#             */
/*   Updated: 2020/11/04 12:57:28 by gsalvo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int k;

	k = 0;
	while (1)
	{
		if (s1[k] > s2[k])
		{
			return (1);
		}
		if (s1[k] < s2[k])
		{
			return (-1);
		}
		if (s1[k] == '\0' && s2[k] == '\0')
		{
			return (0);
		}
		k++;
	}
}
