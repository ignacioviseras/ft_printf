/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igvisera <igvisera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 18:25:14 by igvisera          #+#    #+#             */
/*   Updated: 2023/10/20 17:48:42 by igvisera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t			index;
	unsigned char	*mstr;

	mstr = ((unsigned char *)str);
	index = 0;
	while (index < n)
	{
		if (mstr[index] == ((unsigned char)c))
			return ((void *)mstr + index);
		index++;
	}
	return (NULL);
}
