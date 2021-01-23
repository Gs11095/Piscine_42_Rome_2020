/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsalvo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 17:33:02 by gsalvo            #+#    #+#             */
/*   Updated: 2020/11/02 14:27:51 by gsalvo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strstr(char *str, char *to_find)
{
	int k;
	int j;

	k = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[k])
	{
		j = 0;
		while ((str[k + j]) && str[k + j] == to_find[j])
		{
			if (to_find[j + 1] == '\0')
				return (&str[k]);
			j++;
		}
		k++;
	}
	return (0);
}
