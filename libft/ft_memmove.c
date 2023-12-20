/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igvisera <igvisera@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 17:28:17 by igvisera          #+#    #+#             */
/*   Updated: 2023/11/22 17:41:42 by igvisera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*msrc;
	char	*mdest;

	msrc = ((char *)src);
	mdest = ((char *)dest);
	if (n == 0)
		return (mdest);
	if (dest > src && src + n > dest)
	{
		while (n--)
		{
			mdest[n] = msrc[n];
		}
	}
	else
	{
		ft_memcpy(mdest, msrc, n);
	}
	return (mdest);
}
