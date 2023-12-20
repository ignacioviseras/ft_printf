/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igvisera <igvisera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 17:42:54 by igvisera          #+#    #+#             */
/*   Updated: 2023/11/24 23:13:05 by igvisera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	index;
	int	sign;
	int	num;

	index = 0;
	sign = 1;
	num = 0;
	while (nptr[index] == ' ' || nptr[index] == '\t' || nptr[index] == '\n'
		|| nptr[index] == '\v' || nptr[index] == '\f' || nptr[index] == '\r')
		index++;
	while (nptr[index] == '+' || nptr[index] == '-')
	{
		if (nptr[index + 1] == '+' || nptr[index + 1] == '-')
			return (0);
		if (nptr[index] == '-')
			sign *= -1;
		index++;
	}
	while (nptr[index] < '0' && nptr[index] > '9')
		index++;
	while (nptr[index] >= '0' && nptr[index] <= '9')
		num = num * 10 + (nptr[index++] - '0');
	num *= sign;
	return (num);
}
