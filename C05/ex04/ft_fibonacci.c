/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsalvo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 13:12:59 by gsalvo            #+#    #+#             */
/*   Updated: 2020/11/11 15:55:36 by gsalvo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_fibonacci(int index)
{
	int num;

	num = 0;
	if (index < 0)
		return (-1);
	if (index < 2)
		return (index);
	else
		num = ft_fibonacci(index - 2) + ft_fibonacci(index - 1);
	return (num);
}
