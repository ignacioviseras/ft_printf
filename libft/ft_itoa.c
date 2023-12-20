/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igvisera <igvisera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 19:42:36 by igvisera          #+#    #+#             */
/*   Updated: 2023/10/20 17:46:36 by igvisera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	sizenum(int num)
{
	size_t	size;

	size = 0;
	if (num < 0)
	{
		num = num * -1;
		size++;
	}
	while (num > 0)
	{
		num = num / 10;
		size++;
	}
	return (size);
}

char	*ft_itoa(int n)
{
	size_t	c;
	char	*num;
	size_t	len;

	if (n == 0)
		return (ft_strdup("0"));
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	len = sizenum(n);
	num = (char *)ft_calloc(sizeof(char), sizenum(n) + 1);
	if (!num)
		return (NULL);
	if (n < 0)
	{
		n = n * -1;
		num[0] = '-';
	}
	while (n > 0)
	{
		c = n % 10;
		n = n / 10;
		num[--len] = c + '0';
	}
	return (num);
}
